HELP_FILE := README.txt

PROG_NAME := variadic_print
VALGRIND_LOGS_FILE := _vg_log_$(PROG_NAME).txt
EXE_EXT := out

COMPILER := g++
COMPILE_FLAGS := -g -Wall -pedantic -std=c++17

RUN_COMMAND := valgrind --leak-check=yes --log-file="$(VALGRIND_LOGS_FILE)" ./$(PROG_NAME).$(EXE_EXT)


all : help
    
help:
	cat $(HELP_FILE)

$(PROG_NAME):
	$(COMPILER) $(COMPILE_FLAGS) $(PROG_NAME).cpp -o $(PROG_NAME).$(EXE_EXT)
	$(RUN_COMMAND)
  
vg_logs:
	cat $(VALGRIND_LOGS_FILE)

clean:
	rm *.$(EXE_EXT)
	rm $(VALGRIND_LOGS_FILE)

