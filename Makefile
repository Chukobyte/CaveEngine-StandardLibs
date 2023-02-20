FLAGS = -Wall -Wextra -pedantic-errors

INCLUDES = -I ./Source/ -I ./Include/
SOURCES = $(wildcard Source/Containers/*.cpp Tests/*.cpp Tests/Containers/*.c)

all:
	g++ $(SOURCES) -o ./Bin/Tests -std=c++17 $(INCLUDES) $(FLAGS)

clean:
	del ./Bin/Tests.exe

run:
	./Bin/Tests.exe
