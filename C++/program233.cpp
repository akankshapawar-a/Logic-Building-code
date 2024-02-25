#include<iostream>
typedef unsigned int UNIt;
using namespace std;

bool CheckBit(UNIt iNo)
{
    UNIt iMask = 4;
   UNIt iResult = 0;

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
    UNIt iValue = 0;
    bool bRet = false;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    bRet = CheckBit(iValue);
    if(bRet == true)
    {
        cout<<"3rd bit is ON"<<"\n";
    }
    else
    {
        cout<<"3rd bit is OFF"<<"\n";
    }

    return 0;
}
