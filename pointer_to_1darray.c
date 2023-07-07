#include<stdio.h>

int main()
{
    int arr[5] = {10,20,30,40,50};
    int k;
    printf("The elements of the array are:\n");
    for(k=0; k<5; k++)
    {
        printf("%d\t",*(arr+k));
    }
    return 0;
}