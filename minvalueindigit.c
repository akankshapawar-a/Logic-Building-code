//min value in digit
#include<stdio.h>

int CountDigitFrequency(int iNo)
{
    int iDigit = 0;
   int min=9;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit<min)
        {
           min=iDigit;
        }
        iNo = iNo / 10;
    }
    return min;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountDigitFrequency(iValue);
    printf("Frequency of 8 is : %d\n",iRet);

    return 0;
}