#include<stdio.h>
#include<conio.h>
int main()
{
 int vowels=0,consonants=0,i;
 char a[30],*p;
 p=a;
 printf("enter a string:\n");
 scanf("%s",a);
 while(*p!='\0')
 {
     if(*p=='A'||*p=='E'||*p=='i'||*p=='O'||*p=='U'||*p=='a'||*p=='e'||*p=='o'||*p=='u'||*p=='i')
        vowels++;
     else
        consonants++;
        p++;
 }
 printf("no of vowels:%d",vowels);
 printf("no of consonants:%d",consonants);
return 0;
}
