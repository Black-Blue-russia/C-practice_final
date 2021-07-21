#include<stdio.h>
void array(){
    int n;
    printf("Введите число - ");
    scanf("%d", &n);
    //printf("%d", n);

    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
            printf("%d+%d=%d   ", j,i,j+i);
        printf("\n");
    }
}