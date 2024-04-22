#include<stdio.h>
#include<string.h>
void revstr(char *);
int main(){
    char data[]="This is reverse of string in C using recursion";
    printf("%s\n",data);
    printf("%s\n",strrev(data));
    //char *result=strrev(data);
    //printf("%s\n",result);
    printf("%s\n",data);
    return 0;
}
void revstr(char *data){

}