//Write a program to check if a given number is positive, negative, or zero.
#include<stdio.h>
int main(){
    int a;
    printf("enter any number");
    scanf("%d",&a);
    if (a>0)
    {
    printf("%d is positive",a);    
    }
    else if(a==0)
    {
        printf("%d is zero",a);
    }
    else
    {
        printf("%d is negative",a);
    }
    return 0;
}
