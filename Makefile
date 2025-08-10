TARGET = calculator

CXX = g++

CXXFLAGS = -std=c++17 -Wall -Wextra -Werror

LDFLAGS = -lsfml-graphics -lsfml-window -lsfml-system

SRC_DIRS = . add sub mul div graph

SRCS = $(foreach dir, $(SRC_DIRS), $(wildcard $(dir)/*.cpp))

OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

clean:
	rm -f $(OBJS) $(TARGET)

re: clean all