//  input : 7891
//  output :   4  

//stacklayout

#include<iostream>
using namespace std;

void DisplayDisgits(int iNo)
{
    if(iNo != 0)
    {
        DisplayDisgits(iNo / 10);
        cout<<iNo<<"\n";
    }

}

int main()
{
    int ivalue = 0 , iret = 0;
    cout<<"enter the number :";
    cin>>ivalue;

    DisplayDisgits(ivalue);
    
    return 0;
}