#include<stdio.h>
#include<string.h>
void revstr(char *);
int main(){
    char str1[]="abcd";
    char str2[]="pqrs";
    char str3[]="1234";
    printf("%s\n",str1);
    printf("%s\n",str2);
    printf("%s\n",strcpy(str1,str2));
    //printf("%s\n",strcpy(str2,str1));
    printf("%s\n",strcat(str3,str2));
    printf("%s\n",str3);
    return 0;
}
