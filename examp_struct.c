//create a structure with 3 variable name of the car ,maximum speed, price .

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct car
{
    char name[100];
    int speed;
    int price;
};

void main()
{
   int n;
   printf("enter n: ");
   scanf("%d",&n);
    struct car c[3];
    for(int i=0;i<n;i++)
    {
        printf("enter name of the car : ");
        scanf("%s",c[i].name);
        printf("maximum speed of car: ");
        scanf("%d",&c[i].speed);
        printf("price of car: ");
        scanf("%d",&c[i].price);
    }
    for(int i=0;i<n;i++)
    {
        printf("%s\n",c[i].name);
        printf("%d\n",c[i].speed);
        printf("%d\n",c[i].price);
    }
}