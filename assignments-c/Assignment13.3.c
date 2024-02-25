/*
4. We have to design application for tourist company. Tourist company provides cars on rent. Depends on the running of car they apply rent.If running is less than 100 kilometres then they charge 25 rupees per kilometre. And if running is more than 100 kilometres then they apply 15 rupees per kilometre after 100 kilometres. We have to accept number of kilometres from user and return the estimated rent.
 Input: 73 Input: 132 Input: 189
output: 1825 Output: 2980 output: 3835


*/
#include<stdio.h>
void totalbill(int ino)
{
    if(ino <100)
    {
     printf("%d",ino*25);  
    }
    else if(ino>100)
    {
       printf("%d",ino*15+1000);    
    }
  
}






int main()
{
    int ivalue = 0;
    int iret = 0;

    printf("Enter kilometer:");
    scanf("%d",&ivalue);

     totalbill(ivalue);



    return 0;
}