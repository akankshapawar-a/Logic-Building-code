/*1. Design application for hotel. According to the management team of hotel they are giving discount on total bill amount of customer. If bill bill amount is less than 500 then there is no discount, if bill amount is less than 1500 and more than 500 they give 10% discount. And if the bill amount is more than 1500 then they give 15% discount. Our application should accept total bill amount and depends on the discount policy we have to return the amount after applying discount.
Input: 1200 Input: 290 Input: 3700
Output: 1080 Output: 290 Output: 3145
*/

#include<stdio.h>

void totalbill(int ino)
{
    if(ino < 500)
    {
        printf("no discount");
    }
    else if(ino < 1500 && ino > 500)
    {
   printf("10%% discount is=%d",(ino-(ino*0.10)));
    }
    if(ino > 1500)
    {
       printf("15%% discount is=%d",(ino-(ino*0.15)));
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