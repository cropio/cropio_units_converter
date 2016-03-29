#include <string.h>
#include "bushel_per_acre.h"

namespace cropio_units {
  BushelPerAcre::BushelPerAcre(char *standard_crop_name) {
    int stringLength = strlen(standard_crop_name);
    this->standard_name = new char[stringLength];
    strcpy(standard_crop_name, this->standard_name);
  };

  BushelPerAcre::~BushelPerAcre() {
    delete [] standard_name;
  };

  float BushelPerAcre::coefficient() {
    return this->bushels_table[standard_name];
  };

  void BushelPerAcre::define_bushels_table() {
    this->bushels_table["wheat_spring"] = 3.6744;
    this->bushels_table["wheat_winter"] = 3.6744;
    this->bushels_table["pea"] = 3.6744;
    this->bushels_table["potatoes"] = 3.6744;
    this->bushels_table["soya"] = 3.6744;

    this->bushels_table["rye_winter"] = 3.9368;
    this->bushels_table["rye_spring"] = 3.9368;
    this->bushels_table["maize"] = 3.9368;
    this->bushels_table["linum"] = 3.9368;
    this->bushels_table["millet"] = 3.9368;

    this->bushels_table["barley_spring"] = 4.593;
    this->bushels_table["barley_winter"] = 4.593;
    this->bushels_table["buckwheat"] = 4.593;

    this->bushels_table["avena_spring"] = 6.4842;
    this->bushels_table["avena_winter"] = 6.4842;

    this->bushels_table["rice"] = 2.204624;

    this->bushels_table["oil_seed_raps_spring"] = 4.4092;
    this->bushels_table["oil_seed_raps_winter"] = 4.4092;

    this->bushels_table["sunflower"] = 7.3487;

    this->bushels_table["triticale_spring"] = 4.23960;
    this->bushels_table["triticale_winter"] = 4.23960;
  };
}

