#include<stdio.h>

int main()
{
    int iCnt = 0;

    printf("ASCII Table\n");
    
    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%c\t %d \t%X\t%o\n",iCnt,iCnt,iCnt,iCnt);
    }

    return 0;
}