#include <stdio.h>
#include <stdlib.h>

int spoj_pole(const int *a, int delka_a, const int *b, int delka_b, int **vystup){




    return 1;
}

int main(void){

    int *a, delka_a, *b, delka_b, *vystup;

    printf("Zadejte delku prvniho pole:\n");
    if (scanf("%d", &delka_a) != 1 || delka_a <= 0){
        printf("Nespravny vstup.\n");
        return 1;
    }

    a = malloc(delka_a * sizeof(*a));
    if(a == NULL){
        printf("Nespravny vstup.\n");
        return 1;
    }

    printf("Zadejte prvky prvniho pole:\n");
    for (int i = 0; i < delka_a; i++){
        if(scanf("%d", a[i]) != 1){
            free(a);
            printf("Nespravny vstup.\n");
            return 1;
        }
    }

    printf("Zadejte delku druheho pole:\n");
    if (scanf("%d", &delka_b) != 1 || delka_b <= 0){
        printf("Nespravny vstup.\n");
        free(a);
        return 1;
    }

    b = malloc(delka_b * sizeof(*b));
    if (b == NULL){
        printf("Nespravny vstup.\n");
        free(a);
        return 1;
    }

    printf("Zadejte prvky druheho pole:\n");
    for (int i = 0; i < delka_b; i++){
        if(scanf("%d", b[i]) != 1){
            free(a);
            free(b);
            printf("Nespravny vstup.\n");
            return 1;
        }
    }










    return 0;
}