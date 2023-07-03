DEBUG_FLAG = -g3 -O0 -march=native
PRODUCTION_FLAG = -O3 -march=native -L. -I. -lGodDrinksCPP_src
ifeq ($(OS), Windows_NT)
	EXECUTABLE_EXTENSION = exe
else
	EXECUTABLE_EXTENSION = out
endif

all:
	@echo Compiling.....
	g++ -c -o GodDrinksCPP_src.o GodDrinksCPP_src.cpp $(PRODUCTION_FLAG) -std=c++20 -fPIC
	g++ -shared -o libGodDrinksCPP_src.dll GodDrinksCPP_src.o
	g++ -shared -o libGodDrinksCPP_src.so GodDrinksCPP_src.o
#	g++ -o world-execute-me-debug.$(EXECUTABLE_EXTENSION) GodDrinksCPP.cpp $(DEBUG_FLAG) -std=c++20
	g++ -o world-execute-me.$(EXECUTABLE_EXTENSION) GodDrinksCPP.cpp $(PRODUCTION_FLAG)  -std=c++20
	@echo Compiled.