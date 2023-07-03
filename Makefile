DEBUG_FLAG = -g3 -O0 -march=native -pedantic
PRODUCTION_FLAG = -O3 -march=native 
LIBRARY_FLAGS = -L./ -I./ -lGodDrinksCPP_src
ifeq ($(OS), Windows_NT)
	EXECUTABLE_EXTENSION = exe
else
	EXECUTABLE_EXTENSION = out
endif

all:
	@echo Compiling library.....
	g++ -c -o GodDrinksCPP_src.o GodDrinksCPP_src.cpp $(PRODUCTION_FLAG) -std=c++20 -fPIC
	g++ -shared -o libGodDrinksCPP_src.dll GodDrinksCPP_src.o
	g++ -shared -o libGodDrinksCPP_src.so GodDrinksCPP_src.o
	@echo Library compiled.

	@echo Compiling program.....
	g++ -o world-execute-me-debug.$(EXECUTABLE_EXTENSION) GodDrinksCPP.cpp $(DEBUG_FLAG) $(LIBRARY_FLAGS) -std=c++20
	g++ -o world-execute-me.$(EXECUTABLE_EXTENSION) GodDrinksCPP.cpp $(PRODUCTION_FLAG) $(LIBRARY_FLAGS) -std=c++20
	@echo Program compiled.