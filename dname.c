 #include<stdio.h>
void main()
{
    int i,j;
    int n=7;
    for (i=1;i<=n; i++)
    {
       for (int j=1; j<=n; j++)
       {
        if (i==1 || i==n ||j==1 ||j==n ||i==j || i+j==n+1 )
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }

       }
    }
}