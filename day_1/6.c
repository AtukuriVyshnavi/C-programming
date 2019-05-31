#include<stdio.h>
#include<conio.h>
int main()
{
    int i,table,limit,result;
    printf("enter the table:\n");
    scanf("%d",&table);
    printf("enter the limit:\n");
    scanf("%d",&limit);
    printf("the table is:\n");
    for(i=1;i<=limit;i++)
    {
        result=i+table;
        printf("%d %d %d\n",result,i,table);
    }
return 0;
}
