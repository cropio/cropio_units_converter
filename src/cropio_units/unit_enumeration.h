namespace cropio_units {
  /*
   * Length on maps, distance, tracks length
   * Default unit - KM
  */
  enum length_unit {
    KM,
    MILE
  };

  /*
   * Small distances like geofencing radius and implement width
   * Default unit - M
  */
  enum short_length_unit {
    FT,
    M
  };

  /*
   * Area of fields, land parcels, additional objects
   * Default unit - HA
  */
  enum area_unit {
    HA,
    ACRE
  };

  /*
   * Weight of yield in agro operations
   * Default unit - KG
  */
  enum weight_unit {
    KG,
    POUND,
    CENTNER,
    TON
  };

  /*
   * Volume
   * Default unit - LITER
  */
  enum volume_unit {
    PINT,
    QUART,
    LITER,
    UK_GALLON,
    US_GALLON,
    BUSHEL
  };

  /*
   * Fields productivity in history and reports
   * Default unit - CENTNER_PER_HA
  */
  enum productivity_unit {
    CENTNER_PER_HA,
    TON_PER_HA,
    US_TON_PER_ACRE,
    BUSHEL_PER_ACRE
  };

  /*
   * Speed of machines
   * Default unit - M_PER_SEC
  */
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

  /*
   * Water content in applications for agro operations
   * Default unit - LITER_PER_HA
  */
  enum water_rate_unit {
    LITER_PER_HA,
    PINT_PER_ACRE,
    QUART_PER_ACRE
  };

  /*
   * Fuel consumption for machines
   * Default unit - LITER_PER_100KM
  */
  enum fuel_consumption_unit {
    LITER_PER_100KM,
    KM_PER_LITER,
    MILE_PER_US_GALLON,
    MILE_PER_UK_GALLON
  };

  /*
   *
   * Default unit - CM
  */
  enum depth_unit {
    dCM,
    dIN
  };

  /*
   *
   * Default unit - M
  */
  enum row_spacing_unit {
    rsCM,
    rsIN,
    rsFT,
    rsM
  };
}

