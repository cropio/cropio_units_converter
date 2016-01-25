#include "units_table.h"
#include "bushel_per_acre.cpp"

float UnitsTable::length(length_unit unit) {
  switch(unit) {
    case KM:
      return 1.0;
    case MILE:
      return 0.621371192;
  }
};

float UnitsTable::short_length(short_length_unit unit) {
  switch(unit) {
    case FT:
      return 1.0;
    case M:
      return 0.621371192;
  }
};

float UnitsTable::area(area_unit unit) {
  switch(unit) {
    case HA:
      return 1.0;
    case ACRE:
      return 2.47;
  }
};

float UnitsTable::weight(weight_unit unit) {
  switch(unit) {
    case KG:
      return 1000.0;
    case POUND:
      return 454.545;
    case CENTNER:
      return 10.0;
    case TON:
      return 1.0;
  }
};

float UnitsTable::machinery_weight(weight_unit unit) {
  switch(unit) {
    case KG:
      return 1.0;
    case POUND:
      return 0.45359237;
    case CENTNER:
      return 0.01;
    case TON:
      return 0.001;
  }
};

float UnitsTable::volume(volume_unit unit) {
  switch(unit) {
    case PINT:
      return 2.11337642;
    case QUART:
      return 1.05668821;
    case LITER:
      return 1.0;
    case UK_GALLON:
      return 0.22;
    case US_GALLON:
      return 0.26;
    case BUSHEL:
      return 0.0283775918;
  }
};

float UnitsTable::tank_volume(volume_unit unit) {
  switch(unit) {
    case LITER:
      return 1.0;
    case UK_GALLON:
      return 0.22;
    case US_GALLON:
      return 0.26;
    default:
      throw "Error";
  }
};

float UnitsTable::productivity(productivity_unit unit,
                               char* standard_crop_name) {
  switch(unit) {
    case CENTNER_PER_HA:
      return 1.0;
    case TON_PER_HA:
      return 0.1;
    case US_TON_PER_ACRE:
      return 0.224;
    case BUSHEL_PER_ACRE:
      BushelPerAcre bpa(standard_crop_name);
      return bpa.coefficient();
  }
};

float UnitsTable::speed(speed_unit unit) {
  switch(unit) {
    case M_PER_SEC:
      return 1.0;
    case KM_PER_HOUR:
      return 3.6;
    case MILE_PER_HOUR:
      return 2.2369362920544;
  }
};

ConversionFunction UnitsTable::temperature(temperature_unit unit,
                                            bool to_base) {
  switch(unit) {
    case CELSIUS:
      return (to_base ? to_celsius : from_celsius);
    case FAHRENHEIT:
      return (to_base ? to_fahrenheit : from_fahrenheit);
  }
};

float UnitsTable::precipitation_level(precipitation_level_unit unit) {
  switch(unit) {
    case MM:
      return 1.0;
    case CM:
      return 0.1;
    case IN:
      return 0.0393700787;
  }
};

float UnitsTable::water_rate(water_rate_unit unit) {
  switch(unit) {
    case LITER_PER_HA:
      return 1.0;
    case PINT_PER_ACRE:
      return  0.855253093;
    case QUART_PER_ACRE:
      return 0.427626547;
  }
};

ConversionFunction UnitsTable::fuel_consumption(fuel_consumption_unit unit) {
  switch(unit) {
    case LITER_PER_100KM:
      return lp100km;
    case KM_PER_LITER:
      return  kmpl;
    case MILE_PER_US_GALLON:
      return mpusg;
    case MILE_PER_UK_GALLON:
      return mpukg;
  }
};

float UnitsTable::to_celsius(float temp) {
  return temp;
};

float UnitsTable::from_celsius(float temp) {
  return temp;
};

float UnitsTable::to_fahrenheit(float temp) {
  return temp * (9.0 / 5.0) + 32.0;
};

float UnitsTable::from_fahrenheit(float temp) {
  return (temp - 32.0) / (5 / 9);
};

float UnitsTable::lp100km(float consumption) {
  return consumption;
}

float UnitsTable::kmpl(float consumption) {
  return 100 / consumption;
}

float UnitsTable::mpusg(float consumption) {
  return 235.214582 / consumption;
}

float UnitsTable::mpukg(float consumption) {
  return 282.480936 / consumption;
}
