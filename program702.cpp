//  input : 7891
//  output :   4  

//stacklayout

#include<iostream>
using namespace std;

int CountDigits(int iNo)
{
    static int iCount = 0;

    if(iNo != 0)
    {
        iCount++;
        iNo = iNo / 10;
        cout<<iNo<<"\n";
        CountDigits(iNo);
    }
    return iCount;
}

int main()
{
    int ivalue = 0 , iret = 0;
    cout<<"enter the number :";
    cin>>ivalue;

    iret = CountDigits(ivalue);
    //cout<<"number of digits are :"<<iret<<"\n";
    
    return 0;
}