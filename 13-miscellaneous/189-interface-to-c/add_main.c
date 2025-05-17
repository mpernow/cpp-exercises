/*
 * First compile the add.cpp file with C++ compiler to an object:
 *  g++ -c add.cpp
 * Then compile this file with a C compiler:
 *  gcc add.o add_main.c
 * */
#include <stdio.h>

#include "add.h"

int main() { printf("add(2, 3) returns %d\n", add(2, 3)); }
