
#include <stdio.h>
#include "functions.h"
int validate() {
    int num;
    do{
        printf("Introdueix un nombre enter: ");
        scanf("%d", &num);
    }while (num < 0);
    return num;
}

