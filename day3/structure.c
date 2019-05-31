#include<stdio.h>
#include<conio.h>
struct struct1
{

 int roll;
 char projectname[10];
 char name[10];
}s1;
struct struct2
{
    char projectname[10];
    char guidename[10];
}s2;
int main()
{
    printf("roll:");
    scanf("%d\n",s1.roll);
    printf("name:");
    scanf("%s\n",s1.name);
    printf("project name:");
    scanf("%s\n",s1.projectname);
    s1.projectname[10]=s2.projectname[10];
    printf("guide name:");
    scanf("%s",s2.guidename);
    printf("project name s2:%s",s2.projectname);
    return 0;

}
