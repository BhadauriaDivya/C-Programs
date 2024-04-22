#include<stdio.h>
struct student{
    char *sname;
    int sid;
    int marks;
};
int main(){
    struct student s1={"Student 1",1,80};
    printf("Student name=%s\n",s1.sname);
    printf("Id=%d\n",s1.sid);
    printf("marks=%d\n",s1.marks);
    return 0;
}