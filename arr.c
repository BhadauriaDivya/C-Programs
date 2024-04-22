#include<stdio.h>
int main(){
    int data[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
       // printf("%d",*(data+i));
        //printf("%d,",&data);
         //printf("%d, ",*data);
      // printf("%d",data);
       // printf("%d",*(data+1));
        printf("%d",data[i]);
    }
    return 0;
}