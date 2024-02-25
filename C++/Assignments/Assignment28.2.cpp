/*
2. Write a program which accept one number and position from user and off that bit. Return modified number.
Enter number :
10
Enter the bit position:
2
8

*/
#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT offBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;
   
    if((iPos < 1) || (iPos > 32))
    {
        cout<<"Invalid position"<<"\n";
            }
    
    iMask = iMask << (iPos - 1);
 
    iResult = iNo & iMask;
    if(iResult == iMask)
    {
       return (iMask ^ iNo);
    }
    else
    {
        return iNo;
    }
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

    iRet = offBit(iValue, iBit);
   cout<<iRet;

    return 0;
}