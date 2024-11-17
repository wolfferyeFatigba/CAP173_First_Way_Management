#ifndef MANAGER_H
#define MANAGER_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char *product_name;
    char *code_bar_serie;
    int quantity
} manager_t;


void fill_the_struct_tab();
void add(manager_t *s, int y);

#endif /* MANAGER_H */