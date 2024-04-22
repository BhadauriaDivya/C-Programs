#include<stdio.h>
void revstr(char[], int);
int main(){
    char data[]="This is reverse of string in C using recursion";
    printf("%s\n",data);
    revstr(data,0);
    return 0;
}
void revstr(char data[],int n){
    if (data[n]!='\0'){
        revstr(data,n+1);
        printf("%c",data[n]);
    }
}