//  input : 7891
//  output : 25

//stacklayout

#include<iostream>
using namespace std;

int SumDisgits(int iNo)
{
    static int iSum = 0;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        SumDisgits(iNo /10);
    }

    return iSum;

}

int main()
{
    int ivalue = 0 , iret = 0;
    cout<<"enter the number :";
    cin>>ivalue;

    iret = SumDisgits(ivalue);
    cout<<"Summation is :"<<iret<<"\n";
    
    return 0;
}