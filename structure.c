#include<stdio.h>
struct stu{
        char name;
        int rollno;
        int marks;
    }s1,s2,s3;
int main(){
    struct stu;    
    printf("Enter 1 student name:");
    scanf("%s",s1.name);
    printf("Enter 1 student roll no.:");
    scanf(" %d",s1.rollno);
    printf("Enter 1 student name:");
    scanf("%d",s1.marks);
    return 0;
}