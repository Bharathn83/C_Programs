/*****
12. Write a C program to find length of string using pointers.
******/
#include<stdio.h>

int main(){
    char *str="c programming";
    char *ptr=NULL;
    unsigned count=0;
    ptr=str;
    while(*ptr!='\0'){
        count++;
        ptr++;
    }
    printf("string length= %d\n",count);
    
    return 0;
}
