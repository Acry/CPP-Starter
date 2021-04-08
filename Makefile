define colorecho
	@tput setaf 2
	@echo $1
	@tput sgr0
endef

CC = g++
# Compiler Flags
CPPFLAGS     = -no-pie -ggdb -Wall -Wextra -mtune=native

# Linker Flags
LD_FLAGS    = 

SRC_DIR	    = src/
BUILD_DIR    = dest/

TARGETS     = second template-functions template-classes template-params template-params2 template-params3

.PHONY: all
all: $(TARGETS)

second:   $(SRC_DIR)second.cpp
	$(CC) $(CPPFLAGS) -o $(BUILD_DIR)$@ $< $(LD_FLAGS)

template-functions:   $(SRC_DIR)template-functions.cpp
	$(CC) $(CPPFLAGS) -o $(BUILD_DIR)$@ $<

template-classes:   $(SRC_DIR)template-classes.cpp
	$(CC) $(CPPFLAGS) -o $(BUILD_DIR)$@ $<

template-params:   $(SRC_DIR)template-params.cpp
	$(CC) $(CPPFLAGS) -o $(BUILD_DIR)$@ $<

template-params2:   $(SRC_DIR)template-params2.cpp
	$(CC) $(CPPFLAGS) -o $(BUILD_DIR)$@ $<

template-params3:   $(SRC_DIR)template-params3.cpp
	$(CC) $(CPPFLAGS) -o $(BUILD_DIR)$@ $<

# hot compile
# while inotifywait -e close_write ./code.c; do date +%X; make > /dev/null; done

.PHONY: clean
clean:
	@cd $(BUILD_DIR) && rm $(TARGETS) 2>/dev/null || true

# $<	first dependency
# $@	target name
# $+	list of all dependencies
# $^	list of all unique dependencies