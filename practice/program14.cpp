#include<iostream>
using namespace std;

bool display(int ino,int isearch)
{
    int idigit = 0;
    while(ino != 0)
    {
        idigit = ino % 10;

        if(idigit == isearch)
        {
            break;
        }
        ino = ino / 10;

    }
    if(idigit == isearch)
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
    int ivalue1,ivalue2 =0;
    bool iret =false;
    cout<<"Enter the no =";
    cin>>ivalue1;

    cout<<"Enter the digits (0 -9) = ";
    cin>>ivalue2;

   iret = display(ivalue1,ivalue2);

   if(iret == true)
    {
    cout<<"no is present = "<<ivalue2,ivalue1;

    }
    else
    {
        cout<<"not present in = "<<ivalue2,ivalue1;
    }


    return 0;
}