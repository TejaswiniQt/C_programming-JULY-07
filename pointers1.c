#include<stdio.h>

int main()
{
    int a = 5;
    float b = 5.6;
    int *p1 = &a;
    float *p2 = &b;
    printf("Adderess of a = %p\n",p1);
    printf("Adderess of b = %p\n",p2);
    printf("Adderess of p1 = %p\n",&p1);
    printf("Adderess of p2 = %p\n",&p2);
    printf("Value of a = %d %d %d\n",a,*p1,*(&a));
    printf("Vlaue of b = %.1f %.1f %.1f\n",b,*p2,*(&b));
    return 0;
}