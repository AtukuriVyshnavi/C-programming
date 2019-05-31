#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],n,i,sum=0;
    printf("enter no of elements");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i++)
    {
        sum=sum+a[i];
    }
    printf("sum is:%d",sum);
    return 0;
}
