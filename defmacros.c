#include<stdio.h>
#define MIN(a,b) a<b?printf("Smallest is %d",a):printf("Smallest is %d",b)
int main(){
    MIN(1,3);
    return 0;
}