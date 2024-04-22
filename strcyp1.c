#include<stdio.h>
void revstr(char *);
int main(){
    char *data={"This is reverse of string in C using recursion"};
    printf("%s\n",data);
    revstr(data);
    return 0;
}
void revstr(char *data){
    if (*data){
        revstr(data+1);
        printf("%c",*data);
    }
}