#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,result;
    printf("enter the no:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        result=i*n;
        printf("%d = %d * %d\n",result,i,n);
    }
return 0;
}
