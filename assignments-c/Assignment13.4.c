/*
 3. Design application for school management system. As school is primary there are 4 standards from 1 to 4. School fees of each standard is different. For first standard fees are 8900, for second standard 12790, for third standard 21000 and for fourth standard fees are 23450. We have to accept standard from user and display the corresponding fees.
 Input: 2  
Output: 12790
 Input: 4 
Input: 6 
Output: 23450
 Output: Wrong input

*/


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