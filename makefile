# Compiler
CC = g++

# Compiler flags
CFLAGS = -g -Wall

# Source file
SOURCE = src/main

# Output file
TARGET = bin/dBittorrent

all: $(TARGET)

$(TARGET): $(SOURCE).cpp
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCE).cpp

clean:
	$(RM) $(TARGET)

