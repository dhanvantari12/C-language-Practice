//Program to Swap the values of two variables.
#include<stdio.h>
int main(){
    int a,b;

    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);

    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("After swapping numbers : \n a = %d , b = %d",a,b);

    return 0;
}