#include "manager.h"

void fill_the_struct_tab(int y)
{
manager_t *s1;
int k = 0, l = 0, g = 0;
char prod_name[50];
char code[50];
int quantity;
printf("Please enter number of initial product in your stock base:");
scanf("%d", &y);
s1 = malloc(sizeof(manager_t) * (y));
for (int i = 0; i < y; i++) {
        s1[i].product_name = NULL;
        s1[i].code_bar_serie = NULL;
    }
for(int h = 1; k < y; k++, h++) {
    printf("Product %d name:", h);
    scanf("%49s", prod_name);
    printf("\n");
    s1[k].product_name = malloc((strlen(prod_name) + 1));
    strcpy(s1[k].product_name, prod_name);
}
//printf("Enter the code bar series:");
for(int h = 1; g < y; g++, h++){
    printf("Code bar %d:", h);
    scanf("%s", code);
    printf("\n");
    s1[g].code_bar_serie = malloc(strlen(code) + 1);
    strcpy(s1[g].code_bar_serie, code);
}
for(int h = 1; l < y; l++, h++){
    printf("Actual quantity of product %d you want to put in stock:", h);
    scanf("%d", &quantity);
    printf("\n");
    s1[l].quantity = quantity;
}
add(s1);
for(int i = 0; i < y; i++) {
    free(s1[i].code_bar_serie);
}
for(int j = 0; j < y; j++){
    free(s1[j].product_name);
}
free(s1);
}

void add(manager_t *s)
{
    int a = 0, n = 0, b = 0;
    char str[50];char ans[10];
    printf("Do you want to sell or add a product? Type \"sell\" or \"add\": ");
    scanf("%s", ans);
    if (strcmp(ans, "sell") == 0) {
        printf("How many product are you selling?: ");
        scanf("%d", &b);
        for(;a < b; a++) {
            printf("\nProduct name: ");
            scanf("%s", str);
            printf("\nEnter the quantity you want to sell now: ");
            scanf("%d", &n);
            if (strcmp(str, s[a].product_name) == 0) {
                s[a].quantity -= n;
                printf("%d",s[a].quantity);
        }
    }
} else if (strcmp(ans, "add") == 0) {
    printf("How many product are you adding in the stock?");
    scanf("%d", &b);
    for(; a < b; a++) {
        printf("Product name: ");
        scanf("%s", str);
        printf("\nEnter the quantity you want to add now: ");
        scanf("%d", &n);
        if (strcmp(str, s[a].product_name) == 0) {
                s[a].quantity += n;
                printf("%d",s[a].quantity);
        }
    }
}
}
