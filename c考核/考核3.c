#include <stdio.h>
#include<stdlib.h>
int main ()
{
    unsigned char img1[3][3] = {234,156,213,129,108,67,225,23,211};
    for(int i=0;i<=3;i++)
    {
        for(int j=0;j<=3;j++)
        {   if (img1[i][j]>128)
            printf("1");
            else
            printf("0");
        }
        printf("\n");
    }
    return 0;
}