#include<stdio.h>
int main(){
    printf("Enter a Octal number to convert Hexadecimal:");
    int n,m;
    scanf("%o",&n);
    printf("Hexadecimal number is:%x \n",n);
    printf("Enter a Hexadecimal number to convert Octal:");
    scanf("%x",&m);
    printf("Octal number is:%o",m);
    return 0; 
}
