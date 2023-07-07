#include<stdio.h>

int main()
{
    int a = 5;
    int *p1;
    int **p2;
    p1 = &a;
    p2 = &p1;
    printf("Address of a : %p\n",&a);
    printf("Value of p1 : %p\n",p1);
    printf("Value of p2 : %p\n",p2);
    printf("Value of *p1 : %d\n",*p1);
    printf("Value of *p2 : %d\n",**p2);
    return 0;
}