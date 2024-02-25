    #include<stdio.h>
   #include<stdbool.h>
 bool checkdigitispresent(int iNo)
    {
        int iDigit = 0;
          bool bflag=false;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
             if(iDigit==8){
bflag =true;
break;
}

iNo = iNo / 10;
}
return bflag;
  }
      

    int main()
    {
        int iValue = 0;
      
       bool bRet=false;

        printf("Enter number : \n");
        scanf("%d",&iValue);
    
bRet=checkdigitispresent(iValue );

       
         if(bRet==true){
printf("digit is present");
}
else{
printf("digit is not present");
}


return 0;
}

      
