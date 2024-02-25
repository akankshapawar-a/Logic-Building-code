/*

Write a program which accept one number and position from user and toggle that Bit Return modified number.
Enter number :
10
Enter the bit position:
3
14
*/


#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT toogle(UINT iNo, UINT iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;
   
    if((iPos < 1) || (iPos > 32))
    {
        cout<<"Invalid position"<<"\n";
            }
    
    iMask = iMask << (iPos - 1);
 
   iResult=(iMask ^ iNo);
return iResult;
    
}
int main()
{
    UINT iValue = 0;
    UINT iBit = 0;

   UINT iRet = 0;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    cout<<"Enter the bit position:"<<"\n";
    cin>>iBit;

    iRet = toogle(iValue, iBit);
   cout<<iRet;

    return 0;
}