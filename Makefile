CC = g++
AR = ar
SOURCE = src/cropio_units
LIB = lib
TARGET = units
BUILD_TARGET = cropio_units

build: clean
			mkdir -p $(LIB)
			$(CC) -c $(SOURCE)/$(TARGET).cpp -o $(LIB)/$(BUILD_TARGET).o
			$(AR) -cvq $(LIB)/$(BUILD_TARGET).a $(LIB)/$(BUILD_TARGET).o
			rm $(LIB)/$(BUILD_TARGET).o

			cat $(SOURCE)/unit_enumeration.h \
					$(SOURCE)/units_table.h \
					$(SOURCE)/cropio_units_table.h \
					$(SOURCE)/units.h \
					> $(LIB)/$(BUILD_TARGET).h
clean:
			rm -rf $(LIB)
