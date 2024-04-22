#include<stdio.h>
typedef struct std{
    char name;
    char address;
    long long name1;
}student;
int main(){
    student s1;
    printf("%d",sizeof(s1));
    return 0;
}