#include<stdio.h>


void Strchr(char *str,char *dest)
{
int iLength=0;
    while(*str != '\0')
    {


*str++;
iLength++;
}
str--;
for(;iLength!=0;iLength--){
*dest=*str;
str--;
*dest++;

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