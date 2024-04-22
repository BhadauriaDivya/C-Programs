#include<stdio.h>
#include<string.h>
void revstr(char *);
int main(){
    char str1[]="abcd";
    char str2[]="abce";
    printf("%d\n",strcmp(str1,str2));
    return 0;
}
