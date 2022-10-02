#include <stdio.h>
long addTwoNumbers(long *, long *);

int main()
{
    long fno, sno, sum;

    scanf("%ld", &fno);

    scanf("%ld", &sno);
    sum = addTwoNumbers(&fno, &sno);
    printf(" The sum of %ld and %ld  is %ld\n\n", fno, sno, sum);
    return 0;
}
long addTwoNumbers(long *n1, long *n2)
{
    long sum;
    sum = *n1 + *n2;
    return sum;
}
