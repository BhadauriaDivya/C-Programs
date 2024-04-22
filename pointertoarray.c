#include<stdio.h>
void pointerstoarray(int[]);
int main(){
    int data[4]={30,40};
    int (*pdata)[2]=&data;
    printf("%d ", *(data+0));  
    printf("%d\n", *(data+1)); 
    pointerstoarray(data); 
    printf("%d ", *(data+0));  
    printf("%d\n", *(data+1)); 
    return 0;
}
void pointerstoarray(int data[]){
    int c;
    c=data[0];
    data[0]=data[1];
    data[1]=c;
}
