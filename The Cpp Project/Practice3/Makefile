CC = g++
CFLAGS = -Wall -g
LDFLAGS = 

TARGET = Practice3

SRCS = Main.cpp Point1.cpp 

OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET):  $(OBJS)
	$(CC) $(LDFLAGS) $(OBJS) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)