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

clean:
			rm -rf $(LIB)
