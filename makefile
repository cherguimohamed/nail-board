CC = g++
CFLAGS = -g -W -Wall -ansi -pedantic --std=c++11
OBJSIEVE  = main.o Plank.o Obstacle.o Launcher.o Nail.o Counter.o
SRC = src
INC = include
EXEC = main
PLANK_DEP_H = $(INC)/Plank.h $(INC)/Obstacle.h $(INC)/Counter.h $(INC)/Nail.h $(INC)/Launcher.h

all: $(EXEC) clean
.PHONY: clean

$(EXEC) : $(OBJSIEVE)
	$(CC) $^ -o $@ -lm

main.o : $(SRC)/main.cpp 
	$(CC) -c  $^ -I./$(INC)

Obstacle.o : $(SRC)/Obstacle.cpp $(INC)/Obstacle.h
	$(CC) -c $< -I./include

Nail.o : $(SRC)/Nail.cpp $(INC)/Nail.h $(INC)/Obstacle.h 
	$(CC) -c $< -I./include

Counter.o : $(SRC)/Counter.cpp  $(INC)/Counter.h $(INC)/Obstacle.h 
	$(CC) -c $< -I./include

Launcher.o : $(SRC)/Launcher.cpp  $(INC)/Launcher.h $(INC)/Obstacle.h 
	$(CC) -c $< -I./include

Plank.o : $(SRC)/Plank.cpp $(PLANK_DEP_H)
	$(CC) -c $< -I./include

clean :
	rm -f *.o



