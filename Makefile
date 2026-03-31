# @file Makefile
# @author Isaac McKnew and Jose Jaime
# @date 2026-03-30
# @brief Makefile for Game Library
# Makefile for compiling the Game Library project

# Compiler
CC = g++

# Target Executable Name
TARGET = test

# Compile with all error and warnings
CFLAGS = -c -Wall -Wextra

# Default Target
all: $(TARGET)

# Link all object files into the final executable
$(TARGET): main.o library.o game.o
	$(CC) -o $(TARGET) main.o library.o game.o

# Compile main.cpp into main.o
main.o: main.cpp library.h
	$(CC) $(CFLAGS) main.cpp

# Compile library.cpp into library.h
library.o: library.cpp library.h game.h
	$(CC) $(CFLAGS) library.cpp

# Compile game.cpp into game.h
game.o: game.cpp game.h
	$(CC) $(CFLAGS) game.cpp

# Clean up compiled files
clean:
	$(RM) $(TARGET) *.o *~
