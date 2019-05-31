#include<stdio.h>
#include<conio.h>
int main()
{
    char a[10]="pathfront",b[10]="bgr",c[10];
    int position=3,i,temp;
    for(i=0;i<position;i++)
    {
        c[i]=a[i];
    }
    temp=position;
    for(i=0;b[i]!='\0';i++)
    {
        c[position]=b[i];
        position++;
    }
        for(i=temp;a[i]!='\0';i++)
        {
            c[position]=a[i];
            position++;
        }
c[position]!='\0';
puts(c);
return 0;
}
