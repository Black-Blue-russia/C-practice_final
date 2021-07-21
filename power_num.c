#include<stdio.h>
void power(){
    int a,b;
    int c=1;
    printf("Введите число:");
    scanf("%d",&a);
    printf("Введите степень:");
    scanf("%d",&b);
    for (int i=0; i<b;i++)
        c=c*a;
    printf("Число %d в %d степени = ", a,b);
    printf("%d", c);
}