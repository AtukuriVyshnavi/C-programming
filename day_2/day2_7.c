#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100],i,n,small,small2;
    printf("enter no of elements:");
    scanf("%d",&n);
    printf("enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    small=small2=a[0];
    for(i=1;i<n;i++)
    {
        if(small>a[i])
        {
            small2=small;
            small=a[i];
        }
        else if(small2>a[i] && a[i]!=small)
        {
            small2=a[i];
        }
    }
    printf("the second smallest no is:%d",small2);
return 0;
}
