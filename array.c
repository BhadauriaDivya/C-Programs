#include<stdio.h>
int main(){
    int arr[10]={[0]=2,[5]=3,[8]=2};
    for(int i=0;i<10;i++){
    printf("%d, ",arr[i]);
    }
    return 0;
}