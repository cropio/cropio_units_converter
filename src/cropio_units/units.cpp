#include "units_table.cpp"
#include "units.h"

CropioUnits::CropioUnits(CropioUnitsTable table) {
  this->table = table;
}

float CropioUnits::length_from_base(float value) {
  return value * units_table.length(table.length);
}

float CropioUnits::length_to_base(float value) {
  return value / units_table.length(table.length);
}

float CropioUnits::short_length_from_base(float value) {
  return value * units_table.short_length(table.short_length);
}

float CropioUnits::short_length_to_base(float value) {
  return value / units_table.short_length(table.short_length);
}

float CropioUnits::area_from_base(float value) {
  return value * units_table.area(table.area);
}

float CropioUnits::area_to_base(float value) {
  return value / units_table.area(table.area);
}

float CropioUnits::weight_from_base(float value) {
  return value * units_table.weight(table.weight);
}

float CropioUnits::weight_to_base(float value) {
  return value / units_table.weight(table.weight);
}

float CropioUnits::machinery_weight_from_base(float value) {
  return value * units_table.machinery_weight(table.weight);
}

float CropioUnits::machinery_weight_to_base(float value) {
  return value / units_table.machinery_weight(table.weight);
}

float CropioUnits::volume_from_base(float value) {
  return value * units_table.volume(table.volume);
}

float CropioUnits::volume_to_base(float value) {
  return value / units_table.volume(table.volume);
}

float CropioUnits::tank_volume_from_base(float value) {
  return value * units_table.tank_volume(table.tank_volume);
}

float CropioUnits::tank_volume_weight_to_base(float value) {
  return value / units_table.tank_volume(table.tank_volume);
}

float CropioUnits::productivity_from_base(float value,
                                          char* standard_crop_name) {
  return value * units_table.productivity(table.productivity,
                                          standard_crop_name);
}

float CropioUnits::productivity_weight_to_base(float value,
                                               char* standard_crop_name) {
  return value / units_table.productivity(table.productivity,
                                          standard_crop_name);
}

float CropioUnits::speed_from_base(float value) {
  return value * units_table.speed(table.speed);
}

float CropioUnits::speed_to_base(float value) {
  return value / units_table.speed(table.speed);
}

float CropioUnits::temperature_from_base(float value) {
  return units_table.temperature(table.temperature, false)(value);
}

float CropioUnits::temperature_to_base(float value) {
  return units_table.temperature(table.temperature, true)(value);
}

float CropioUnits::precipitation_level_from_base(float value) {
  return value * units_table.precipitation_level(table.precipitation_level);
}

float CropioUnits::precipitation_level_to_base(float value) {
  return value / units_table.precipitation_level(table.precipitation_level);
}

float CropioUnits::water_rate_from_base(float value) {
  return value * units_table.water_rate(table.water_rate);
}

float CropioUnits::water_rate_to_base(float value) {
  return value / units_table.water_rate(table.water_rate);
}

float CropioUnits::fuel_consumption_from_base(float value) {
  return units_table.fuel_consumption(table.fuel_consumption)(value);
}

float CropioUnits::fuel_consumption_to_base(float value) {
  return units_table.fuel_consumption(table.fuel_consumption)(value);
}
