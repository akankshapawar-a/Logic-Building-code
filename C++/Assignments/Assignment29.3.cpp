/*
2. Write a program which accept two numbers from user and display position of common ON bits from that two numbers.
Enter number :
257
 bit is OFF*/

#include<iostream>
using namespace std;

bool CheckBit(int iNo)
{
    int iMask = 0X900;
    int iResult = 0;

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
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    bRet = CheckBit(iValue);
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

