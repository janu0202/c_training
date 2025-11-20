//write a functoin which will accepects two input parameters x,y and returns x^2 and y^2
#include <stdio.h>
int parameter(int x ,int y)
{
   int sum = (x*x) + (y*y);
   return sum;
}
void main()
{
    int x = 2;
    int y = 3;
    printf("%d",parameter(x,y));
}