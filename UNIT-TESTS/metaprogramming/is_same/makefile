
HELP_FILE := ../../.make_help.txt

PROG_NAME := is_same
EXE_EXT := out

COMPILER := g++
COMPILE_FLAGS := -g -Wall -pedantic -std=c++20

RUN_COMMAND := ./$(PROG_NAME).$(EXE_EXT)


all : help
    
help:
	cat $(HELP_FILE)

$(PROG_NAME):
	$(COMPILER) $(COMPILE_FLAGS) $(PROG_NAME).cpp -o $(PROG_NAME).$(EXE_EXT)
	$(RUN_COMMAND)

clean:
	rm *.$(EXE_EXT)

