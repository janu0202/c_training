#include <stdio.h>
#include <string.h>
void main()
{
    //create

    char name [10] = "jahnavi";
    char new[100] = "hello";


    //access
    printf("%c\n", name[2]);


    //length
    printf("length of string is %ld\n",strlen(name));


    //concatenation
    strcat(new, name); //new = hello+jahnavi
    printf("%s \n", new);

}