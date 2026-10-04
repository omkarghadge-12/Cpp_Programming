//  input : 7891
//  output :   4  

//stacklayout

#include<iostream>
using namespace std;

int CountDisgits(int iNo)
{
    int iCount = 0;

    while(iNo != 0)
    {
        iCount++;
        iNo = iNo / 10;
    }
}

int main()
{
    int ivalue = 0 , iret = 0;
    cout<<"enter the number :";
    cin>>ivalue;

    iret = CountDisgits(ivalue);
    cout<<"number of digits are :"<<iret<<"\n";
    
    return 0;
}