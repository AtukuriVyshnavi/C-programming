#include<stdio.h>
#include<conio.h>
int main()
{
    char a[10]="vysh",b[10];
    int i=0,n=5;
    puts(a);
    printf("b:");
    while(i<n)
    {
        scanf("%c",&b[i]);
        i++;
    }
    puts(b);
    return 0;
}
