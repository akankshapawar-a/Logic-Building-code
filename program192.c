#include<stdio.h>

// 1 : travel till end of dest
// 2 : copy the data from src to dest
// 3 : write '\0' at the end of dest

void strcatX(char *src, char *dest , int iLength)
{
    // 1 : travel till end of dest
    while(*dest != '\0')
    {
        dest++;
    }

    
    // 2 : copy the data from src to dest
    while(*src != '\0'&& iLength!=0)
    {
        *dest = *src;
        dest++;
        src++;
iLength--;
    }
    
    // 3 : write '\0' at the end of dest
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20] = "Demo";
int iNo=0;
    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

 printf("Enter number od character that yo want to copy : \n");
    scanf("%d",&iNo);


    strcatX(Arr,Brr,iNo);

    printf("String after copy is : %s\n",Brr);

    return 0;
}