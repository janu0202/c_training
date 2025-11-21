#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    char name[100];
    int age;
    float marks;
};
void main()
{
    struct student s1;
    struct student *p=&s1;
    strcpy(p-> name,"jahnavi");
    p->age=19;
    p->marks=98.9;
    printf("%s  ",p->name);
    printf("%d  ",p->age);
    printf("%f  ",p->marks);
}
