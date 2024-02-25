//Print the digit in string
#include<stdio.h>

void strlenDigitsX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
         printf("%c",*str);
        }
        str++;
    }
    
}

int main()
{
    char Arr[10];
   

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);    

   strlenDigitsX(Arr);    // strlenX(100);

   
    return 0;
}