#include <stdio.h>
#include <stdlib.h>

int spoj_pole(const int *a, int delka_a, const int *b, int delka_b, int **vystup){

    if(a == NULL || b == NULL || delka_a <= 0 || delka_b <= 0 || vystup == NULL)
        return 0;

    *vystup = malloc((delka_a + delka_b) * sizeof(**vystup));
    if (*vystup == NULL)
        return 0;

    for (int i = 0; i < delka_a + delka_b; i++){
        if (i < delka_a)
            (*vystup)[i] = a[i];
        else
            (*vystup)[i] = b[i - delka_a];
    }

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
        if(scanf("%d", &a[i]) != 1){
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
        if(scanf("%d", &b[i]) != 1){
            free(a);
            free(b);
            printf("Nespravny vstup.\n");
            return 1;
        }
    }

    if(spoj_pole(a, delka_a, b, delka_b, &vystup)){
        for (int i = 0; i < delka_a + delka_b; i++){
            if(i < delka_a + delka_b - 1)
                printf("%d ", vystup[i]);
            else
                printf("%d\n", vystup[i]);
        }
        free(vystup);
        free(a);
        free(b);
    }
    else {
        printf("Nespravny vstup.\n");
        free(a);
        free(b);
        return 1;
    }

    return 0;
}