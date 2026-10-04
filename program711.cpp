#include<iostream>
using namespace std;

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    iCnt = 1;

    while( iCnt <= (iNo/2) )
    {
        if(iNo % iCnt == 0)
        {
            cout<<iCnt<<"\n";
        }
        
        iCnt++;
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