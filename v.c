#include<stdio.h>
int main(){
    int n;
    printf("Enter number of times pattern to be made:");
    scanf("%d",n);
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<2*n;j++)
        {
            if(i==n-j || j==n+i)
                {  
                    printf("* ");
                }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}