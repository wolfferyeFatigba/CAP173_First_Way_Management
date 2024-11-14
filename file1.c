#include "manager.h"

void fill_the_struct_tab()
{
manager_t *s1;
int y = 0, k = 0, l = 0, g = 0;
char prod_name[50];
char code[50];
int quantity;
printf("Please enter number of initial product in your stock base:");
scanf("%d", &y);
s1 = malloc(sizeof(manager_t) * (y));
for(; k < y; k++) {
    scanf("%49s", prod_name);
    s1[k].product_name = malloc((strlen(prod_name) + 1));
    strcpy(s1[k].product_name, prod_name);
}
printf("Enter the code bar series");
for(; g < y; g++){
    scanf("%s", code);
    s1[g].code_bar_serie = malloc(strlen(code) + 1);
    strcpy(s1[g].code_bar_serie, code);
}
for(; l < y; l++){
    scanf("%d", &quantity);
    s1[l].quantity = quantity;
}
for(int i = 0; i < y; i++) {
    free(s1[i].code_bar_serie);
}
for(int j = 0; j < y; j++){
    free(s1[j].product_name);
}
free(s1);
}