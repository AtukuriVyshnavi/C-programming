#include<stdio.h>
#include<conio.h>
struct students
{
    int average;
    int subjects;
    int roll;
    int marks[5];
    int i;
    char name[10];
};
int main()
{
struct students s;
int i;
int sum=0;
s.subjects=4;
printf("marks:");
for(i=0;i<4;i++)
{
 scanf("%d",&s.marks[i]);
}
    printf("name:");
    scanf("%s",s.name);
    printf("roll no:");
    scanf("%d",&s.roll);
    for(i=0;i<4;i++)
    {
        sum=sum+s.marks[i];
    }
    s.average=sum/s.subjects;
    printf("average is:%d\n",s.average);
    return 0;
}

