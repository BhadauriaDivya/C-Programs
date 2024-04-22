#include<stdio.h>
int main(){
    int N,arr[10]={0};
    printf("Enter a number:");
    scanf("%d",&N);
    int r;
    while(N>10){
        r=N%10;
        if(arr[r]==1){
            break;
        }
        arr[r]=1;
        N=N/10;
    }
    if(N>0){
    printf("Yes");
    }
    else{
    printf("No");
}
    return 0;
}