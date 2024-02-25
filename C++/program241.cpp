#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo,UINT ipos)
{
    UINT iMask =0X00000001;
    UINT iResult = 0;
iMask=iMask<<(ipos-1);
 if((ipos < 1) || (ipos > 32))
    {
        cout<<"Invalid position"<<"\n";
        return false;
    }
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
    bool bRet = false;
     UINT bit=0;
    cout<<"Enter number : "<<"\n";
    cin>>iValue;
 cout<<"Enter the poition(1to 32) : "<<"\n";
    cin>>bit;

    bRet = CheckBit(iValue,bit);
    if(bRet == true)
    {
        cout<<" bit is ON"<<"\n";
    }
    else
    {
        cout<<" bit is OFF"<<"\n";
    }

    return 0;
}

