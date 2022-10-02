//Write a program in C to find the maximum number between two numbers using a pointer.


#include<stdio.h>

int main()
{
    int a=5;
    int b=6;

    int *p;
    int *q;

    p=&a;
    q=&b;

    if (*p>*q)
    {
        printf("%d\n",*p);
        printf("p is greater");
    }
    else
    {
        printf("q is greater");
    }
}