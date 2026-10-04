#include<iostream>
using namespace std;

void DisplayFactors(int iNo)
{
    static int iCnt = 1;

    if( iCnt <= (iNo/2) )
    {
        if(iNo % iCnt == 0)
        {
            cout<<iCnt<<"\n";
        }
        iCnt++;
        DisplayFactors(iNo);
    }
}

int main()
{
    int ivalue = 0 , iret = 0;
    cout<<"enter the number :";
    cin>>ivalue;

    DisplayFactors(ivalue);
    
    return 0;
}