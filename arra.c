 #include<stdio.h>
 int main(){
    int arr[10]={10,20,30,40,45,60,65,70,80,90};
    int flag=0;
    int search;
    printf("Number to search:");
    scanf("%d",search);
    for(int i=0;i<10;i++){
        if(arr[i]==search){
            printf("Number search is at:%d",i);
            flag=1;
            break;
        }
    }
        if(!flag){
            printf("Data not found");
        }
    return 0;
 }