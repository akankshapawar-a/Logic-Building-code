/*
1.Write a program which accept one number and position from user and check whether bit at that position is on or off. If bit is one return TURE otherwise return FALSE.
Enter number :
10
Enter the bit position :
2
True
*/

#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0X00000001;
    UINT iResult = 0;

    if((iPos < 1) || (iPos > 32))
    {
        cout<<"Invalid position"<<"\n";
        return false;
    }
    
    iMask = iMask << (iPos - 1);

    iResult = iNo & iMask;
    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    UINT iValue = 0;
    UINT iBit = 0;

    bool bRet = false;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    cout<<"Enter the bit position:"<<"\n";
    cin>>iBit;

    bRet = CheckBit(iValue, iBit);
    if(bRet == true)
    {
        cout<<"True"<<"\n";
    }
    else
    {
        cout<<"False"<<"\n";
    }

    return 0;
}
