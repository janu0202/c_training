#include<stdio.h>
#include<stdlib.h>
void main()
{
    float*p=(float*)calloc(4,sizeof(float));
    p[0]=78.8;
    p[1]=45.8;
    p[2]=67.8;
    p[3]=46.7;
    printf("%f %f %f %f",p[0],p[1],p[2],p[3]);
    free(p);
}