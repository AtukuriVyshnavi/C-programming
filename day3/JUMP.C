#include<stdio.h>
#include<conio.h>
void main()
{
char s[5];
int n=5,i;
printf("enter a string:");
scanf("%s",&s);
for(i=0;i<=n;i++)
{
s[i]=s[n]+2;
printf("%s",&s);
}
getch();
}

