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

    cout<<"Addition of characters : "<<Addition('a' , 'b')<<"\n";

    cout<<"Addition of integers : "<<Addition(11 , 10)<<"\n";
    cout<<"Addition of float : "<<Addition(11.3f , 10.2f)<<"\n";
    cout<<"Addition of double : "<<Addition(90.3455 , 50.3456)<<"\n";

    return 0;
}