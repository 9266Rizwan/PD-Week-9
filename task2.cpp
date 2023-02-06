#include <iostream>
using namespace std;
main()
{
    string names[5]={"Gladiator","StarWars","Terminator","TakingLives","TombRider"};
    string movie;
    int ticket;
    cout << "Enter movie name : ";
    getline(cin,movie);

    for(int idx=0; idx<5; idx++)
    {
        if(movie==names[idx])
        {
            if(idx%2==0)
            {
                ticket=500-(500*0.10);
            }
            else
            {
                ticket=500-(500*0.05);
            }
        }
    }
    cout << "Ticket price of " << movie << " is " << ticket;
}