#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of time pattern to be made\n");
    scanf("%d",&n);
    for(int i=0; i<=n; ++i){
        for (int j=0; j<=i; ++j)
         if(i>0 && i<n && j>0 & j<n){
            printf("  ");
        }
        else{
            printf("*");
        }
        printf("\n");
    }
    return 0;
}