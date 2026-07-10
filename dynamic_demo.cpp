#include<iostream>
using namespace std;

int main()
{
    int length = 0;
    int *arr = NULL;

    cout<<"enter the no. of elements:\n";
    cin>>length;

    // step 1:allocate the memory
    arr = new int[length];
    if(arr == NULL)
    {
        cout<<"unable to allocate\n";

    }
    else {
        cout<<"memory gets allocated";
    }

    // step  2:use the memory

    // step 3:deallocate the memory
    delete  [] arr;

    return 0;
}