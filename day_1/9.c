#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0;
    printf("enter a value");
    scanf("%d",&n);
    while(n>0)
    {
        sum++;
        n=n/10;
    }
printf("sum is %d",sum);
return 0;
}
