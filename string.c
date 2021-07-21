#include<stdio.h>
#include<stdbool.h>
void string_(){
    char vowel[]={'a','e','i','o','u','y'};
    char input[16];
    char temp;
    bool a;
    printf("Введите массив:");
    for (int i=0; i<16; i++)
            scanf("%c",&input[i]);
    printf("Исходный массив - ");
        for (int i=0; i<16; i++)
            printf(" %c",input[i]);
    int d=16;
    int i=0;
    while (i<d)
    {
        a = true;
        for (int j=0; j<6; j++)        
            if (input[i]==vowel[j])
            {

                d--;
                a = false;
                for (int k=i; k<15; k++)
                {
                    temp=input[k];
                    input[k]=input[k+1];
                    input[k+1]=temp;
                }
                break;
            }
        if (a) 
            i++;
    }    
    printf("\nИсходный массив - ");
        for (int i=0; i<16; i++)
            printf(" %c",input[i]);
    printf("\n");
}
                   