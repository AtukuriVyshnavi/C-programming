#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100],i,j,n,count=0;
    printf("enter no of elements");
    scanf("%d",&n);
    printf("enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                break;
            }
        }
    }
    printf("\n total no of duplicate elements:%d",count);
    return 0;
}
