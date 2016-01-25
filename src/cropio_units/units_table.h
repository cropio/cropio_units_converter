enum length_unit {
  KM,
  MILE
};

enum short_length_unit {
  FT,
  M
};

enum area_unit {
  HA,
  ACRE
};

enum weight_unit {
  KG,
  POUND,
  CENTNER,
  TON
};

enum volume_unit {
  PINT,
  QUART,
  LITER,
  UK_GALLON,
  US_GALLON,
  BUSHEL
};

enum productivity_unit {
  CENTNER_PER_HA,
  TON_PER_HA,
  US_TON_PER_ACRE,
  BUSHEL_PER_ACRE
};

enum speed_unit {
  M_PER_SEC,
  KM_PER_HOUR,
  MILE_PER_HOUR
};

enum temperature_unit {
  CELSIUS,
  FAHRENHEIT,
};

enum precipitation_level_unit {
  MM,
  CM,
  IN
};

enum water_rate_unit {
  LITER_PER_HA,
  PINT_PER_ACRE,
  QUART_PER_ACRE
};

enum fuel_consumption_unit {
  LITER_PER_100KM,
  KM_PER_LITER,
  MILE_PER_US_GALLON,
  MILE_PER_UK_GALLON
};

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

private:
  static float to_celsius(float temp);
  static float from_celsius(float temp);
  static float to_fahrenheit(float temp);
  static float from_fahrenheit(float temp);

  static float lp100km(float consumption);
  static float kmpl(float consumption);
  static float mpusg(float consumption);
  static float mpukg(float consumption);
};
