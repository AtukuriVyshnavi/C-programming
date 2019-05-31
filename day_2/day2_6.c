#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20],i,Size,first,second;
    printf("enter the number of elements:");
    scanf("%d",&Size);
    printf("enter the elements:");
    for(i=0;i<Size;i++)
    {

        scanf("%d",&a[i]);
    }
    first=second= INT_MIN;
    for(i=0;i<Size;i++)
    {
        if(a[i]>first)
        {
            second=first;
            first=a[i];
        }
        else if(a[i]>second && a[i]<first)
        {
            second=a[i];
        }
    }
    printf("the second largest no:%d",second);
    return 0;

}


