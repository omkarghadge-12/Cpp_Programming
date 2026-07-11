#include<iostream>
using namespace std;

class base
{
    public:
        int i,j;

    void fun()
    {
        cout<<"inside baae fun\n";

    }
};

class derived:public base
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

    cout<<"size of base class object:"<<sizeof (bobj)<<"\n ";
    cout<<"size of derived class object:"<<sizeof (dobj)<<"\n ";

    return 0;
}
