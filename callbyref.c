#include<stdio.h>
void swapbyref(int* , int*);
int main(){
    int a=10,b=20;
    printf("A=%d B=%d\n",a,b);
    swapbyref(a,b);
    printf("A=%d B=%d\n",a,b);
    return 0;
}
void swapbyref(int *a,int *b){
    int c;
    c=*a;
    *a=*b;
    *b=*c;
    printf("A=%d B=%d\n",a,b);
}