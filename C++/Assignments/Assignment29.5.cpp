/*5. Write a program which accept one number from user and range of positions from user. Toggle all bits from that range.*/
#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT CheckBit(UINT iNo, UINT istart, UINT iend)
{UINT iresult=0;
UINT iMask;
for(int i=istart ;i<=iend ;i++){
 iMask=1<<i;
iNo=iNo^iMask;

}
return iNo;
}
int main()
{
    UINT iValue = 0;
    UINT iBit1 = 0, iBit2 = 0;

  UINT iRet = false;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;

    cout<<"Enter the first bit position: "<<"\n";
    cin>>iBit1;

    cout<<"Enter the second bit position:"<<"\n";
    cin>>iBit2;

    iRet = CheckBit(iValue, iBit1, iBit2);
   cout<<iRet<<endl;
    return 0;
}

