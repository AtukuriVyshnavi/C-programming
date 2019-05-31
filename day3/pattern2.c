#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n=4,k;
    for(j=1;j<=n;j++)
    {
    for(i=n-1;i>=j;i--)
    {
        printf("");
    }
    for(k=1;k<=j;k++)
    {
        printf("*");
    }
    printf("\n");
    }

     return 0;
}
