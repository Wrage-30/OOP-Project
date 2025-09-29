# Makefile

# Compiler

CXX = g++

# Compiler flags

CXXFLAGS = -lsfml-graphics -lsfml-window -lsfml-system

# Executable name

TARGET = Airport-sfml-app

# Source files

SRCS = AirCraft.cpp Plane.cpp CommercialPlane.cpp CargoPlane.cpp test.cpp

# Build and run tests

.PHONY: all

all:

	$(CXX) $(SRCS) -o $(TARGET)  $(CXXFLAGS)

	./$(TARGET)

# Clean rule

.PHONY: clean

clean:

	rm -f $(TARGET)