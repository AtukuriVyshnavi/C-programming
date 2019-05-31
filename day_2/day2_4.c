#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,a[20],b[20];
    printf("enter the no of elements:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    printf("\nsecond array is:\n");
    for(i=0;i<n;i++)
    {
        printf("\nvalues inside second array is b[%d]=%d",i,b[i]);
    }
return 0;
}
