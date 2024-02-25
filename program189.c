#include<stdio.h>


void Strcat(char *str,char *dest)
{
int iLength=0;                                       
    while(*dest != '\0')
    {


dest++;

}

while(*str!='\0'){
*dest=*str;
str++;
dest++;

}

*dest='\0';




      

       
}
  
 
  


int main()
{
    char Arr[20];
char Brr[20]="Helo";
  

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    

   Strcat(Arr,Brr);
   
   printf("String after editing is : %s\n",Brr);

    

    return 0;
}