#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char s1[10]="vysh",s2[10];
 int i,length=0;
 clrscr();
 length=strlen(s1);
 length-=1;
 for(i=0;s1[i]!='\0';i++)
 {
	   s2[length]=s1[i];
	   length--;
 }
 printf("the string is %s",s2);
 getch();
 }