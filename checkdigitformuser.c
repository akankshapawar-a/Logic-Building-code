    #include<stdio.h>
   #include<stdbool.h>
 bool checkdigitispresent(int iNo, int iSearch)
    {
        int iDigit = 0;
if(iSearch<0 || iSearch>9){
 printf("Enter the digit in range 0 to 9\n");
        return false;
}
if(iNo<0){
iNo= -iNo;
}

        while(iNo != 0)
        {
            iDigit = iNo % 10;
             if(iDigit==iSearch){
break;
}

iNo = iNo / 10;
}
 if(iDigit==iSearch){
return true;
}     
else{
return false;
}
      }
      

    int main()
    {
        int iValue = 0;
      int iValue2=0;
       bool bRet=false;

        printf("Enter number : \n");
        scanf("%d",&iValue);
    
 printf("Enter number : \n");
        scanf("%d",&iValue2);
    


bRet=checkdigitispresent(iValue,iValue2 );

       
         if(bRet==true){
printf("digit is present");
}
else{
printf("digit is not present");
}


return 0;
}

      
