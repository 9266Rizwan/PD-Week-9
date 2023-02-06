#include <iostream>
using namespace std;
main()
{
    system("cls");
    string input[4];
    bool flag=false;
    for(int idx=0; idx<4; idx++)
    {
        cout << "Enter input : ";
        getline(cin,input[idx]);
    }

    if(input[0]==input[1] && input[0]==input[2] && input[0]==input[3] && input[1]==input[2] && input[1]==input[3] && input[2]==input[3])
    {
        flag=true;
    }
    cout << flag;

}