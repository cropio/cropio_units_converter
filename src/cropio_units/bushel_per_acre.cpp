#include <string.h>
#include "bushel_per_acre.h"

namespace cropio_units {
  BushelPerAcre::BushelPerAcre(char *standard_crop_name) {
    unsigned long stringLength = strlen(standard_crop_name);
    this->standard_name = new char[stringLength + 1];
    strncpy(standard_name, standard_crop_name, stringLength);
    define_bushels_table();
  };

  BushelPerAcre::~BushelPerAcre() {
    delete [] standard_name;
    bushels_table.clear();
  };

  float BushelPerAcre::coefficient() {
    if (bushels_table[standard_name]) {
      return bushels_table[standard_name];
    }
    else {
      return 3.6744;
    }
  };

  void BushelPerAcre::define_bushels_table() {
    bushels_table["wheat_spring"] = 3.6744;
    bushels_table["wheat_winter"] = 3.6744;
    bushels_table["pea"] = 3.6744;
    bushels_table["potatoes"] = 3.6744;
    bushels_table["soya"] = 3.6744;

    bushels_table["rye_winter"] = 3.9368;
    bushels_table["rye_spring"] = 3.9368;
    bushels_table["maize"] = 3.9368;
    bushels_table["linum"] = 3.9368;
    bushels_table["millet"] = 3.9368;

    bushels_table["barley_spring"] = 4.593;
    bushels_table["barley_winter"] = 4.593;
    bushels_table["buckwheat"] = 4.593;

    bushels_table["avena_spring"] = 6.4842;
    bushels_table["avena_winter"] = 6.4842;

    bushels_table["rice"] = 2.204624;

    bushels_table["oil_seed_raps_spring"] = 4.4092;
    bushels_table["oil_seed_raps_winter"] = 4.4092;

    bushels_table["sunflower"] = 7.3487;

    bushels_table["triticale_spring"] = 4.23960;
    bushels_table["triticale_winter"] = 4.23960;
  };
}

