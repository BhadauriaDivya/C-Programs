#include<stdio.h>
#define SUM(a,b) a+b
#define MUL(a,b) a*b
#define MAX(a,b) a>b?printf("%d is greater",a):printf("%d is greater",b)
#define MAXIF(a,b) if(a>b)\
                    printf("%d is greater",a);\
                    else\
                    printf("%d is greater",b);
int main(){
    printf("Sum is=%d\n",SUM(2,5));
    printf("Multiplication is=%d\n",MUL(4,6));
    MAX(2,5);
    printf("\n");
    MAXIF(3,19);
    return 0;
}