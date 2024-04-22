#include<stdio.h>
void arrayofpointer(int[]);
int main(){
    int data[4]={30,40,0,0};
    int *pdata[4]=&data;
    printf("%d ", data[0]);  
    printf("%d\n", data[1]); 
    arrayofpointer(data);    
    printf("%d ", data[0]);  
    printf("%d\n", data[1]); 
    return 0;
}
void arrayofpointer(int data[]){
    int c;
    c=data[0];
    data[0]=data[1];
    data[1]=c;
}
