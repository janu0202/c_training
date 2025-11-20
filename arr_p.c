#include <stdio.h>
void main()
{
    int arr[4]={4009,67,90,47};
    int *p=arr;
    printf("%d\n",*(p+1));
}