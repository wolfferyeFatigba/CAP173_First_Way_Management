#ifndef MANAGER_H
#define MANAGER_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct  manager_t{
    char *product_name;
    char *code_bar_serie;
    int quantity
}manager_t;


void fill_the_struct_tab();

#endif MANAGER_H