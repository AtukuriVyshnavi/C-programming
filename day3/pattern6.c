#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,rows=4,k;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=rows-1;i>=1;i--)
    {
        for(j=i;j>=1;j--)
            printf("*");
        printf("\n");
    }
    return 0;
}
//*
//**
//***
//****
//***
//**
//*
