#include<stdio.h>
typedef struct student{
    char *sname;
    int sid;
    int marks;
}student;
int main(){
    student s1={"Student 1",1,80};
    student *ps1=&s1;
    printf("Value of structure using pointer:\n");
    printf("student name=%s\n",ps1->sname);
    printf("student id=%d\n",ps1->sid);
    printf("student marks=%d\n",ps1->marks);
    return 0;
}