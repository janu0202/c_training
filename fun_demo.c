#include <stdio.h>
int add (int a , int b)
{
    int sum = a+b ;
    return sum;
}
void main()
{
    int a = 100;
    int b = 150;
    printf("%d \n" , add(a,b));
    int c = 100;
    int d = 132;
    printf("%d \n" , add(c,d));
}    