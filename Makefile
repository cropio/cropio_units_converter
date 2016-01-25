CC = g++
SOURCE = src/cropio_units
BUILD_DIR = build
TARGET = units.a

build: clean
    mkdir -p $(BUILD_DIR);
    $(CC) $(SOURCE)/units.cpp -o $(BUILD_DIR)/$(TARGET);

clean:
    rm -rf $(BUILD)
