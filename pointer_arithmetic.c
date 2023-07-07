#include<stdio.h>

int main()
{
    int a = 5, *pi  = &a;
    char b = 'x', *pc = &b;
    float c = 5.5, *pf = &c;
    printf("Value of pi = %p\n",pi);
    printf("Value of pc = %p\n",pc);
    printf("Value of pf = %f\n",pf);
    pi++;
    pc++;
    pf++;
    printf("Value of pi after increment : %p\n",pi);
    printf("Value of pc after increment : %p\n",pc);
    printf("Value of pf after increment : %p\n",pf);
    return 0;
}