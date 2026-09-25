#include<iostream>
using namespace std;

template <class T>
T Addition(T No1 , T No2)
{
    T Ans;
    Ans = No1 + No2;
    return Ans;
}

int main()
{

    float i = 0.0f , j = 0.0f;
    float ret = 0.0f;

    cout<<"Enter first number :\n";
    cin>>i;

    cout<<"Enter second number :\n";
    cin>>j;    

    ret = Addition(i , j);
    cout<<"Addition is : "<<ret<<"\n";
    
    return 0;
}