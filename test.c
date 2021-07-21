#include<stdio.h>
void test(){
    char f = 'f';
    while (f=='f'){
        printf("hello\n");
        scanf("%c", &f);
    }
}