#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100],i,n,position,x;
    printf("enter no of elements;");
    scanf("%d",&n);
    printf("enter the values in ascending order:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the value to be inserted");
    scanf("%d",&x);
    for(i=0;i<n;i++)
        if(x<a[i])
    {
        position=i;
        break;
    }
    for(i=n;i>=position;i--)
        a[i]=a[i-1];
        a[position]=x;
        printf("the list is:");
    for(i=0;i<n;i++)
        printf("%d",a[i]);
    printf("\n finally the list is:\n");
    for(i=0;i<=n;i++)
        printf("%d",a[i]);
    return 0;
}

