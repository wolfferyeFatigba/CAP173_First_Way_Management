#include "manager.h"

void fill_the_struct()
{
manager_t *s1;
int y = 0, k = 0, l = 0;
char prod_name[50];
printf("Please enter number of initial product in your stock base:");
scanf("%d", &y);
s1 = malloc(sizeof(manager_t) * (y));
for(; k < y; k++) {
    scanf("%49s", prod_name);
    s1[k].product_name = malloc((strlen(prod_name) + 1));
    strcpy(s1[k].product_name, prod_name);
}
/*for(int i = 0; i < y; i++) {
    printf("%s", s1[i].product_name);
}*/
for(int j = 0; j < y; j++){
    free(s1[j].product_name);
}
free(s1);
}