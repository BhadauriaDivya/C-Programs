#include<stdio.h>
void swapbyvalue(int , int);
int main(){
    int a=10,b=20;
    printf("A=%d B=%d\n",a,b);
    swapbyvalue(a,b);
    printf("A=%d B=%d\n",a,b);
    return 0;
}
void swapbyvalue(int a,int b){
    int c;
    c=a;
    a=b;
    b=c;
    printf("A=%d B=%d\n",a,b);
}