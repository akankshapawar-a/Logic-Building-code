#include<stdio.h>


void frequency(char *str)
{
  int iCnt1 = 0;
int iCnt2=0;
   
    while(*str != '\0')
    {
if(*str>='a' && *str<='z'){
     iCnt1++;
}else if(*str>='A' && *str<='Z'){
iCnt2++;
}


str++;
      

       
}
  
  printf("count of small letter: %d\n",iCnt1);
        printf("count of capital letter: %d\n",iCnt2);  
  
}

int main()
{
    char Arr[20];
  

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    

     frequency(Arr);
   
    

    

    return 0;
}