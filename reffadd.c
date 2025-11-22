//write a c program which will add 3 numbers and call by refference
#include <stdio.h>
void add(int *a,int *b,int *c)
{
   int add=*a+*b+*c;
   printf("%d",add);
}
void main()
{
    int a=12;
    int b=11;
    int c=12;
    add(&a,&b,&c);
}