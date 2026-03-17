# Compiler
CC = gcc

# Flags
CFLAGS = -Wall -Wextra -Wpedantic -Wshadow -Wformat=2 \
         -Wconversion -Wsign-conversion -Wnull-dereference \
         -Wdouble-promotion -Wimplicit-fallthrough \
         -Wcast-align -Wunused -Wstrict-prototypes \
         -Wmissing-prototypes -g -O0

SANITIZE = -fsanitize=address -fsanitize=undefined

INCLUDE = -Iinclude

# Directories
BUILD = build
OBJ_DIR = $(BUILD)/obj
BIN_DIR = $(BUILD)/bin
SRC = src
EXAMPLES = main

# Library
LIB = $(BUILD)/libnlib.a
LIB_SRC = $(wildcard $(SRC)/*.c)
LIB_OBJ = $(patsubst $(SRC)/%.c,$(OBJ_DIR)/%.o,$(LIB_SRC))

# Default target
all: dirs $(LIB) $(EXAMPLES:%=$(BIN_DIR)/%)

# Create directories
dirs:
	@mkdir -p $(BUILD) $(OBJ_DIR) $(BIN_DIR)

# Build object files
$(OBJ_DIR)/%.o: $(SRC)/%.c
	$(CC) $(CFLAGS) $(SANITIZE) $(INCLUDE) -c $< -o $@

# Build static library
$(LIB): $(LIB_OBJ)
	ar rcs $@ $^

# Build example programs
$(BIN_DIR)/%: examples/%.c $(LIB)
	$(CC) $(CFLAGS) $(SANITIZE) $(INCLUDE) -c $< -o $(OBJ_DIR)/$*.o
	$(CC) $(OBJ_DIR)/$*.o $(LIB) $(SANITIZE) -o $@

# Run shortcuts
main: $(BIN_DIR)/main
	./$<

# list: $(BIN_DIR)/list
# 	./$<

# Clean
clean:
	rm -rf $(BUILD)

.PHONY: all clean dirs main list