#include<stdio.h>
void sum_value(int a,int b)
{
    int sum=a+b;
    printf("%d ",sum);
}
void sum_ref(int *a,int *b)
{
    int sum=*a+*b;
    printf("%d",sum);
}
void main()
{
    int a=90;
    int b=70;
    printf("call by values: \n");
    sum_value(a,b);   //call by value
    printf("call by reference: \n");
    sum_ref(&a,&b);    //call by reff
}
