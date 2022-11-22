#include <iostream>
using namespace std;

int main()
{
    int i,arr[5],*ptr;
    cout<<"Ener the elementd of the array\n";
    for(i=0;i<5;i++)
    {
        cout<<"arr["<<i<<"]:";
        cin>>arr[i];
    }

    ptr = arr;//&arr is not used bcs 'arr' itself carries the address of the element arr[0]
    // arr is a pointer
    cout<<"Value of *arr:"<<*arr<<endl;

    cout<<"Accessing the array elements by pointer\n";

    for(i=0;i<5;i++)
    {
        cout<<"arr["<<i<<"]:"<<*(ptr+i)<<endl;
    }
}