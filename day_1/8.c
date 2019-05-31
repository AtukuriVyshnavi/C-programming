#include<stdio.h>
#include<conio.h>
int main()
{
    int i,no;
    float sum=0,avg;
    printf("enter the number:");
    scanf("%d",&no);
    for(i=1;i<=no;i++)
    {
        sum=sum+i;
        avg=sum/no;
    }
    printf("average is:%f",avg);
    return 0;
}
