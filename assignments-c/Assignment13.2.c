/*
 2. Design application for income tax department to calculate tax amount. According to the income tax department there is no income tax for the income less than 5 lakhs. If income is in between 5 to 10 lakhs then there will be 10% tax. If income is in between 10 to 20 lakhs then there will be 20% tax. And for more than 20 lakhs there will be 30% tax. We have to accept gross income from user and return the tax amount.
 Input: 600000 Input: 450000 Input: 1200000 Input: 8200000
Output: 10000      (0 + 10000)
Output: 0
Output: 90000  (0 + 50000 + 40000)
Output: 2110000 (0+ 50000+ 200000+ 1860000)*/

#include<stdio.h>
void totalbill(int ino)
{
    if(ino < 500000)
    {
        printf("no income tax");
    }
    else if(ino < 500000 && ino > 1000000)
    {
        printf("10%% discount is = %d",(float)ino*0.10);
    }
   else if(ino < 1000000 && ino>2000000)
    {
        printf("15%% discount is = %d",(float)ino*0.15);
    }
else if(ino<2000000){
printf("30%% discount is = %d",(float)ino*0.30);
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