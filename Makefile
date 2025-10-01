CXX = clang++
CXXFLAGS = -std=c++17 -Wall
SFML_INCLUDE = -I/usr/local/opt/sfml/include
SFML_LIBS = -L/usr/local/opt/sfml/lib -lsfml-graphics -lsfml-window -lsfml-system

SRC = main.cpp game.cpp Aircraft.cpp Airplane.cpp Helicopter.cpp Terminal.cpp Runway.cpp Helipad.cpp atcTower.cpp
OBJ = $(SRC:.cpp=.o)
TARGET = main

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ) $(SFML_INCLUDE) $(SFML_LIBS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< $(SFML_INCLUDE)

clean:
	rm -f $(OBJ) $(TARGET)
