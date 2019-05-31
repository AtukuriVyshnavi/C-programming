#include<stdio.h>
#include<conio.h>
int main()
{
int n,max,m1,m2,m3,m4,m5,total,average,grade;
int percentage;
printf("enter no of subjects:\n");
scanf("%d",&n);
max=n*100;
printf("maximum marks: %d\n",max);
printf("enter %d marks:\n",n);
scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
total=m1+m2+m3+m4+m5;
printf("total:%d\n",total);
average=(total)/n;
printf("average:%d\n",average);
percentage=(total*100)/max;
printf("percentage:%d\n",percentage);
if(total>=400)
{
    printf("grade='O' and your percentage is:%d",percentage);
}
else if(total>300 && total<=399)
{
    printf("grade='E' and your percentage is%d",percentage);
}
else if(total>200 && total<=299)
{
    printf("grade='A' and your percentage is%d",percentage);
}
else
{
 printf("grade='Failed' and your percentage is%d",percentage);
}
return 0;
}

