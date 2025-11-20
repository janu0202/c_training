#include <stdio.h>
void main()
{
    int arr[4][2]={ {27,37},{13,42},{53,63},{45,67}};
    for(int i=0; i<4;i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("%d\n", arr[i][j]);
        }
    }
}