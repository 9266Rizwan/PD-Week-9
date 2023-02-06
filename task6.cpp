#include <iostream>
using namespace std;
main()
{
    int array[3];
    int value;
    for(int idx=0; idx<3; idx++)
    {
        cout << "Enter value : ";
        cin >> array[idx];
    }
    cout << "Enter no of loop : ";
    cin >> value;

    for(int idx=0; idx<3; idx++)
    {
        for(int i=1; i<=value; i++)
        {
            if(array[idx]%2==0)
            {
                array[idx]=array[idx]-2;
            }
            else
            {
                array[idx]=array[idx]+2;
            }
        }
    }
    for(int idx=0; idx<3; idx++)
    {
        cout << array[idx] <<" , ";
    }
}