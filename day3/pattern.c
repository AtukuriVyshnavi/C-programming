#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,rows=5;
    for(i=1;i<rows;i++)
    {
        for(j=i;j<=rows-1;j++)
        {
            printf(" ");
        }
        for(j=0;j<(2*i-1);j++)
        {
            printf("#");
        }
        printf("\n");
    }
return 0;
}
