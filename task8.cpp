#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter the no of colors : ";
    cin >> size;
    string colors[size];
    
    for(int idx=0; idx<size; idx++)
    {
        cout << "Enter color : ";
        cin >> colors[idx];
    }
    int flag=-1;
    int counter=0;
    for(int i=0; i<size; i++)
    {
        if(colors[i]!=colors[i+1])
        {
            flag++;
        }

    }
    counter=(size*2)+flag;
    cout << counter;
}