#include<stdio.h>
typedef union std{
    char name[9];
    int roll;
    char address;
}student;
int main(){
    student s1;
    printf("%d",sizeof(s1));
    return 0;
}