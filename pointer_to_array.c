#include <stdio.h>

int main()
{
    int *p1;
    int (*ptr) [5];
    int arr[5];
    p1 = arr;
    ptr = &arr;
    printf("p1 = %p, ptr = %p\n",p1,ptr);
    p1++;
    ptr++;
    printf("P1 = %p, ptr = %p\n",p1,ptr);
    return 0;
}