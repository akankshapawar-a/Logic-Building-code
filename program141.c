/*
    Input : 

    Row : 6
    Col : 6

    Output : 
    *   a   a   a   a   a
    b   *   b   b   b   b
    c   c   *   c   c   c
    d   d   d   *   d   d   
    e   e   e   e   *   e
    f   f   f   f   f   *         
*/ 
#include<stdio.h> 
void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
char ch='\0';

    if(iRow != iCol)
    {
        printf("Invalid input\n");
        return;
    }
    for(i=1; i<=iRow; i++)
    {   
        for(j = 1, ch='a'; j <=iCol; j++,ch++)  
        {
             
if(i==j){
printf("*\t");
}
else{
printf("%c\t",ch);
}    
        }

      
        printf("\n");
       
    }
}


int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : \n");
    scanf("%d",&iValue1);

    printf("Enter number of columns : \n");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);

    return 0;
}