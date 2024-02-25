#include<stdio.h>

void totalbill(int ino)
{
   switch(ino){
case 1: 
printf("8900");
break;
case 2:
printf("12790");
break;
case 3:
printf("21000");
break;
case 4:
printf("23450");
break;
default :
printf("Invaild input");
}
}

int main()
{
    int ivalue = 0;
    int iret = 0;

    printf("Enter total bill of the customer:");
    scanf("%d",&ivalue);

     totalbill(ivalue);



    return 0;
}