#include<stdio.h>


void Strchr(char *str,char *dest)
{
    while(*str != '\0')
    {
if((*str>='A') && (*str<='Z')){
    *dest=*str+32;
}
else if((*str>='a') && (*str<='z')){
    *dest=*str-32;
}
else{
*dest=*str;
}

*dest++;
*str++;
}
*dest='\0';




str++;
      

       
}
  
 
  


int main()
{
    char Arr[20];
char Brr[20];
  

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    

   Strchr(Arr,Brr);
   
   printf("String after editing is : %s\n",Brr);

    

    return 0;
}