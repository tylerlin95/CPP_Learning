all: main

# CXX = clang++
# override CXXFLAGS += -g -Wmost -Werror
CXX = gcc

# SRCS = $(shell find . -name '.ccls-cache' -type d -prune -o -type f -name '*.cpp' -print | sed -e 's/ /\\ /g')
# HEADERS = $(shell find . -name '.ccls-cache' -type d -prune -o -type f -name '*.h' -print)

### Modify this part -> ###
# SRCS = ./Template/C++/Main.cpp
# HEADERS = ./Template/C++/code.h
SRCS = ./C00/Basic_IO.c
HEADERS = 

### <- Modify this part ###

main: $(SRCS) $(HEADERS)
	$(CXX) $(SRCS) -o "$@"

main-debug: $(SRCS) $(HEADERS)
#	$(CXX) -U_FORTIFY_SOURCE -O0 $(SRCS) -o "$@"
	$(CXX) -g -O0 $(SRCS) -o "$@"

clean:
	rm -f main main-debug