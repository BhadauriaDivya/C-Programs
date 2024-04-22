#include<stdio.h>
int main(){
    printf("Enter a Decimal number to convert Octal:");
    int n;
    scanf("%d",&n);
    printf("Octal number is:%o \n",n);

    printf("Enter a Octal number to convert Decimal:");
    int m;
    scanf("%o",&m);
    printf("Decimal number is:%d",m);
    return 0; 
}