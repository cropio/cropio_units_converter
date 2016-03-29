# cropio_units
Cropio C++ library for conversion between different units of measurement

Edit `Makefile` to set your target arch, options and flags. Then run

```bash
make
```

In directory `lib` you will find two files - `cropio_units.a` library and header `cropio_units.h`.

## Usage example

```cpp
#include "iostream"

#include "cropio_units.h"

using namespace std;

int main(int argc, char **argv) {
  cropio_units::CropioUnitsTable cut;
  cut.fuel_consumption = cropio_units::MILE_PER_US_GALLON;

  cropio_units::CropioUnits u(cut);
  cout << u.fuel_consumption_from_base(7) << endl;
  cout << u.fuel_consumption_to_base(3) << endl;
  return 0;
}
```

You need to initialize the instance of cropio_units::CropioUnits to use conversion. It needs
cropio_units::CropioUnitsTable structure with user units system (default for your application or set by user.
You can find description of this structire
[here](https://github.com/cropio/cropio_units_converter/blob/master/src/cropio_units/cropio_units_table.h).
List of available units you can find in [unit_enumeration.h](https://github.com/cropio/cropio_units_converter/blob/master/src/cropio_units/unit_enumeration.h)


## Units system extention

This library includes meaurement units supported by Cropio itself. You are free to add any other units for your applications.

File [unit_enumeration.h](https://github.com/cropio/cropio_units_converter/blob/master/src/cropio_units/unit_enumeration.h)
contains list and description of units.

Class `cropio_units::UnitsTable` contains methods that returns rates of conversion or conversion functions
for units like temperature (C -> F).

Class `cropio_units::CropioUnits` contains methods for converting values to / from default unit system.


