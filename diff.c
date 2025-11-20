//write a c function which will accept an array arr , its size as n, and returns the difference between 1st and last number
#include <stdio.h>
#include <stdlib.h>
int sub_arr (int arr[],int n)
{
    int sub=arr[0]-arr[n-1]; 
    return ads(sub);
}
void main()
{
    int arr[5]={3,4,5,45,354};
    int n=5;
    printf("%d",sub_arr(arr,n));
}