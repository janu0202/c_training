//write a c program which will accepects three parameter l,b,h and returns volume of cube
#include <stdio.h>
int volume(int l,int b,int h)
{
    int cube=l*b*h;
    return cube;
}
void main()
{
    int l=12;
    int b=3;
    int h=2;
    printf("volume of cube %d",volume(l,b,h));
}