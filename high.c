#include <stdio.h>
void main()
{
    int age;
    float h;
    printf("enter age:");
    scanf("%d", &age);
    printf("enter age:");
    scanf("%f", &h);
    if ((age>12) && (h>4.5));
    {
        printf("is eligible");
    }
    else
    {
        printf("not eligible");
    }
}