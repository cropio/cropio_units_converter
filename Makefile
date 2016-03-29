CC = g++
AR = ar
SOURCE = src/cropio_units
LIB = lib
TARGET = units

build: clean
			mkdir -p $(LIB)
			$(CC) -c $(SOURCE)/$(TARGET).cpp -o $(LIB)/$(TARGET).o
			$(AR) -cvq $(LIB)/$(TARGET).a $(LIB)/$(TARGET).o
			rm $(LIB)/$(TARGET).o

			cat $(SOURCE)/unit_enumeration.h \
					$(SOURCE)/units_table.h \
					$(SOURCE)/cropio_units_table.h \
					$(SOURCE)/units.h \
					> $(LIB)/cropio_units.h
clean:
			rm -rf $(LIB)
