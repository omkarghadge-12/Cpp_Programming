#include<iostream>
using namespace std;

class base      //8
{
    public:int i,j;

    void fun()
    {
        cout<<"inside baae fun\n";

    }
};

class derived:public base       //12
{
    public:
        int x;

        void gun()
        {
            cout<<"inside derived gun\n";
        }
};
int main()
{
    derived dobj;
    base bobj;

    dobj.fun();
    dobj.gun();

    return 0;
}