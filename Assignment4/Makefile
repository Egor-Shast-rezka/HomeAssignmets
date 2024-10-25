CXX = g++
CXXFLAGS = -std=c++11 -Wall -pthread

TARGET = main
TEST_TARGET = test_transformer

SRCS = main.cpp Class_Transformer.cpp Class_Autobot.cpp Class_Dinobot.cpp Class_Decepticon.cpp Class_Weapon.cpp Class_Ability.cpp
OBJS = $(SRCS:.cpp=.o)

TEST_SRCS = test_transformer.cpp Class_Transformer.cpp Class_Autobot.cpp Class_Dinobot.cpp Class_Decepticon.cpp Class_Weapon.cpp Class_Ability.cpp
TEST_OBJS = $(TEST_SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

test: $(TEST_TARGET)

$(TEST_TARGET): $(TEST_OBJS)
	$(CXX) $(CXXFLAGS) -o $(TEST_TARGET) $(TEST_OBJS) -lgtest -lgtest_main
	./$(TEST_TARGET)
	rm -rf $(TEST_TARGET)

clean:
	rm -f $(OBJS) $(TARGET) $(TEST_OBJS) $(TEST_TARGET)
