#include <stdio.h>

struct CropioUnitsTable {
  length_unit length;
  short_length_unit short_length;
  area_unit area;
  weight_unit weight;
  weight_unit machinery_weight;
  volume_unit volume;
  volume_unit tank_volume;
  productivity_unit productivity;
  speed_unit speed;
  temperature_unit temperature;
  precipitation_level_unit precipitation_level;
  water_rate_unit water_rate;
  fuel_consumption_unit fuel_consumption;
};

class CropioUnits
{
private:
  UnitsTable units_table;
  CropioUnitsTable table;

public:
  CropioUnits(CropioUnitsTable table);

  float length_from_base(float value);
  float length_to_base(float value);

  float short_length_from_base(float value);
  float short_length_to_base(float value);

  float area_from_base(float value);
  float area_to_base(float value);

  float weight_from_base(float value);
  float weight_to_base(float value);

  float machinery_weight_from_base(float value);
  float machinery_weight_to_base(float value);

  float volume_from_base(float value);
  float volume_to_base(float value);

  float tank_volume_from_base(float value);
  float tank_volume_weight_to_base(float value);

  float productivity_from_base(float value,
                               char* standard_crop_name);
  float productivity_weight_to_base(float value,
                                    char* standard_crop_name);

  float speed_from_base(float value);
  float speed_to_base(float value);

  float temperature_from_base(float value);
  float temperature_to_base(float value);

  float precipitation_level_from_base(float value);
  float precipitation_level_to_base(float value);

  float water_rate_from_base(float value);
  float water_rate_to_base(float value);

  float fuel_consumption_from_base(float value);
  float fuel_consumption_to_base(float value);
};
