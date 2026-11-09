CXX ?= g++
CXXFLAGS ?= -Wall -Wextra -std=c++11

TARGET := main
SOURCES := main.cc banner.cc
OBJECTS := $(SOURCES:.cc=.o)

.PHONY: all run clean

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

main.o: main.cc banner.h

banner.o: banner.cc banner.h

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJECTS) $(TARGET)