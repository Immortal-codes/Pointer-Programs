// Write a program in C to add two numbers using pointers.

#include<stdio.h>

int main()
{
    int a=10;
    int b=20;

    int *p;
    int *q;

    p=&a;
    q=&b;

   int sum=*p+*q;

    printf("%d",sum);
}