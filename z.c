#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of time pattern to be made\n");
    scanf("%d",&n);
    for(int i=0; i<=n; ++i){
        for (int j=0; j<=n; ++j)
          if(i>0 && i!=n && j!=n-i){
            printf(" ");
        }
        else{
            printf("*");
        }
        printf("\n");
    }
    return 0;
}