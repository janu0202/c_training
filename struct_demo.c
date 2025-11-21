#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
    char name[100];
    int age;
    float marks;
};
 
void main()
{
    struct student s1;
    strcpy(s1.name,"xxxx");
    s1.age=19;
    s1.marks=90.99;


    struct student s2;
    strcpy(s2.name,"yyyy");
    s2.age=18;
    s2.marks=89.999;

    struct student s3={"zzzz",17,99};

    printf("%s  ",s3.name);
    printf("%d",s3.age);

}