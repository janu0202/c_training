//write a c function which will accepts only one parameter r and retune perimeter of circle
#include <stdio.h>
float perimeter(int r)
{
     const float pi=3.14;
    float peri=2*pi*r;
    return peri;
}
void main()
{
    int r = 67;
    printf("%f",perimeter(r));
}