ifeq ($(OS), Windows_NT)
	EXECUTABLE_EXTENSION = exe
else
	EXECUTABLE_EXTENSION = out
endif

all:
	g++ -o world-execute-me.$(EXECUTABLE_EXTENSION) GodDrinksCPP.cpp -std=c++20 -O3