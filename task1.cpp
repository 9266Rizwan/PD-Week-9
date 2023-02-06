#include <iostream>
using namespace std;
main()
{
    string fruits[4]={"peach","apple","guava","watermelon"};
    int price[4]={60,70,40,30};
    string name;
    int quantity;
    cout << "Enter the name of Fruit     : ";
    getline(cin,name);
    cout << "Enter the quantitu of fruit : ";
    cin >> quantity;
    for(int idx=0; idx<4; idx++)
    {
        if(name==fruits[idx])
        {
            cout << "Your bill of " << quantity <<" " << fruits[idx] << " is " << price[idx]*quantity;
        }
    }
}