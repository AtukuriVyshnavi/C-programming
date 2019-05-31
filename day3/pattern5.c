#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,rows=4,k;
    for(i=0;i<=rows;i++)
    {
        for(j=i;j<=rows-1;j++)
        {
            printf("*");
        }
        printf("\n");
    for(k=1;k<=i;k++)
        printf(" ");
    }
    return 0;
}
//***
// **
//  *

