#include<iostream>
using namespace std;

class ArrayX
{
    public :
        int *Arr;
        int *brr;
        int iSize;

        ArrayX(int no);
        
        ~ArrayX();

        void Accept();

        void Display();
    
        void DisplayX();

        int Addition();

        int Maximum();
};

ArrayX :: ArrayX(int no)
{
    cout<<"Inside cunstructor.\n";
    iSize = no;
    Arr = new int[iSize];
    brr = new int[iSize];
}

ArrayX :: ~ArrayX()
{
    cout<<"Inside destructor.\n";
    delete [] Arr;
    delete [] brr;
}

void ArrayX :: Accept()
{
    int iCnt =0;
    cout<<"enter the elements : \n";

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cin>>Arr[iCnt];
    }
    
    int i =0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] != 0)
        {
            cin>>brr[i];
        }
    }
}



void ArrayX :: Display()
{
    int iCnt = 0;
    cout<<"elements of the Array are :\n";
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";
}

void ArrayX :: DisplayX()
{
    int iCnt = 0;
    cout<<"elements of the Array are :\n";
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<brr[iCnt]<<"\t";
    }
    cout<<"\n";
}

int ArrayX :: Addition()
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int ArrayX :: Maximum()
{
    int iMax = 0;
    int iCnt = 0;

    iMax = Arr[0];
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax;
}

int main()
{
    int iValue = 0;

    cout<<"enter the number of elements :\n";
    cin>>iValue;
    
    ArrayX * aobj = new ArrayX(iValue);

    aobj->Accept();
    aobj->Display();
    aobj->DisplayX();

    cout<<"Summation of all elements is : "<<aobj->Addition()<<"\n";
    cout<<"Maximum is : "<<aobj->Maximum()<<"\n";

    delete aobj;

    return 0;
}