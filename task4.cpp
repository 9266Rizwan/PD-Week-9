#include <iostream>
using namespace std;
main()
{
    int flag=0;
    string value;
    cout << "Enter value : ";
    cin >> value;
    int size=value.length();
    for(int idx=0; idx<size; idx++)
    {
        if(value[idx]=='7')
        {
            flag++;
        }
    }
    if(flag>0)
    {
        cout << "Boom!";
    }
    else
    {
        cout << "No there is no 7 in  this array.";
    }
}