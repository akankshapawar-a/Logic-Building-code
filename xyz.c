    #include<stdio.h>
   #include<stdbool.h>
 bool checkdigitispresent(int iNo,int Key)
    {
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            printf("%d\n",iDigit);
            iNo = iNo / 10;
      if(iDigit==Key){
return true;
}
else{
return false;
}
        }
      
    }

    int main()
    {
        int iValue = 0;
        int iValue1=0;
       bool bRet=false;

        printf("Enter number : \n");
        scanf("%d",&iValue);
     printf("Enter number : \n");
         scanf("%d",&iValue1);
bRet= DisplayDigits(iValue,iValue1);

       
         if(bRet==true){
printf("digit is present");
}
else{
printf("digit is present");
}


return 0;
}

        return 0;
    }
