#include<stdio.h>
int check_prime(int a)
{
    int n=1;
    if (a==0 || a==1)
        n=0;
        //printf("not");
    else 
    {
        for (int j=2; j<=a/2; j++)
        {
            if (a % j == 0 )
            {
                n = 0;
                break;
                //printf("not");
            }
        }
    }
    return n;
}

/*void sinmple_number(){
    int a[20];
    int f = 0;
    for (int i=0; i<5; i++)
    {
        printf("Введите %d-й массив - ", i+1 );
        scanf("%d", &a[i]);
    }
    printf("Исходный массив - ");
    for (int i=0;  i<5; i++)
        printf(" %d ", a[i]);
    printf("\nПростых Чисел в массиве - ");
    for (int i=0;  i<5; i++)
    {
        //printf(" %d ", check_prime(a[i]));
        if (check_prime(a[i]) == 1) 
            f++;
        //check_prime(a[i]);
    }
    printf(" %d ", f);
}
*/