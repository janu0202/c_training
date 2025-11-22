#include<stdio.h>
enum days 
{
    monday,tuesday,wednesday,thursday,friday
};
void main()
{
    enum days day;
    day= monday;
    printf("%d  ",day);
}