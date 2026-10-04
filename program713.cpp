#include<iostream>
using namespace std;

int SumFactors(int iNo)
{
    static int iCnt = 1;
    static int iSum = 0;

    if( iCnt <= (iNo/2) )
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
        iCnt++;
        SumFactors(iNo);
    }

    return iSum;
}

int main()
{
    int ivalue = 0 , iret = 0;
    cout<<"enter the number :";
    cin>>ivalue;

    iret = SumFactors(ivalue);
    cout<<"Summation of factors is :"<<iret<<"\n";
    
    return 0;
}