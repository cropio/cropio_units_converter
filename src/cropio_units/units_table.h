namespace cropio_units {
  typedef float (*ConversionFunction)(float);

  class UnitsTable
  {
  public:
    float length(length_unit unit);
    float short_length(short_length_unit unit);
    float area(area_unit unit);
    float weight(weight_unit unit);
    float machinery_weight(weight_unit unit);
    float volume(volume_unit unit);
    float tank_volume(volume_unit unit);
    float productivity(productivity_unit unit, char *standard_crop_name);
    float speed(speed_unit unit);
    ConversionFunction temperature(temperature_unit, bool to_base);
    float precipitation_level(precipitation_level_unit unit);
    float water_rate(water_rate_unit unit);
    ConversionFunction fuel_consumption(fuel_consumption_unit unit);
    float depth(depth_unit unit);
    float row_spacing(row_spacing_unit unit);

  private:
    static float celsius(float temp);
    static float to_fahrenheit(float temp);
    static float from_fahrenheit(float temp);

    static float lp100km(float consumption);
    static float kmpl(float consumption);
    static float mpusg(float consumption);
    static float mpukg(float consumption);
  };
};

