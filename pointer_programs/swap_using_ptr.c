/*****
3. Write a C program to swap two numbers using pointers.
*****/
#include<stdio.h>

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    printf("Before swap a=%d b=%d\n",a,b);
    swap(&a,&b);
    printf("After swap a=%d b=%d\n",a,b);

    return 0;
}


