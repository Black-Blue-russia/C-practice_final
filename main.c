#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
void swap();
void string_();
void devide();
void array();
int symbol();
void power();
int check_prime();      
void simple_number();
void sort();
void test();
int main(){
    bool check = true;
    char f='f';
    while (check)
    {
       string_();
       printf("\n");
       scanf("%c",&f);
       if (f!='f')
            check = false;
    }
    return 0;
};