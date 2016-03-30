namespace cropio_units {
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
    float productivity_to_base(float value,
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

    float depth_from_base(float value);
    float depth_to_base(float value);

    float row_spacing_from_base(float value);
    float row_spacing_to_base(float value);
  };
}

