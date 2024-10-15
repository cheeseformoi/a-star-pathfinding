CXX=g++

CXXFLAGS= -Wall -g

TARGET=astar

SRCS= astar.cpp

OBJS=${SRCS:.cpp=.o}

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET) $(OBJS)
