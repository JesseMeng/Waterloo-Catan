CXX = g++
CXXFLAGS = -std=c++14 -Wall -Werror -g -MMD -D SHOP -D EXPANSION
EXEC = watan
OBJECTS = achievable.o board.o criterion.o enum.o game.o goal.o main.o student.o tile.o
DEPENDS = ${OBJECTS:.o=.d}

${EXEC}: ${OBJECTS} 
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}

-include ${DEPENDS}

.PHONY: clean

clean:
	rm ${OBJECTS} ${EXEC} ${DEPENDS}
