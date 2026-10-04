//  input : 4
//  output : 1 + 2 + 3 + 4 = 10

#include<iostream>
using namespace std;

int Factorial(int iNo)
{
    static int iFact = 1;

    if(iNo >= 1)
    {
        iFact = iFact * iNo;
        Factorial(iNo--);       //postdecrement
    }

    return iFact;
}

int main()
{
    int iRet = 0;

    iRet = Factorial(4);
    cout<<iRet<<"\n";
    
    return 0;
}