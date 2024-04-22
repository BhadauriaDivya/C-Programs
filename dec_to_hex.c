#include<stdio.h>
int main(){
    printf("Enter a Decimal number to convert Hexadecimal:");
    int n;
    scanf("%d",&n);
    printf("Hexadecimal number is:%x \n",n);

    printf("Enter a Hexadecimal number to convert Decimal:");
    int m;
    scanf("%x",&m);
    printf("Decimal number is:%d",m);
    return 0; 
}