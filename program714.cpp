#include<iostream>
using namespace std;

bool CheckPerfect(int iNo)
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
        CheckPerfect(iNo);
    }

    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }

    return iSum;
}

int main()
{
    int ivalue = 0;
    bool bret = false;
    cout<<"enter the number :";
    cin>>ivalue;

    bret = CheckPerfect(ivalue);

    if(bret == true)
    {
        cout<<"Its perfect number";
    }
    else
    {
        cout<<"Its not a perfect number";
    }    
    return 0;
}