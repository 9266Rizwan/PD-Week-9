#include <iostream>
using namespace std;
main()
{
  string moves[10]={"Shimmy","Shake","Pirouette","Slide","Box Step","Headspin","Dosado","Pop","Lock","Arabesque"};
  int pin;
  cout << "Enter pin : ";
  cin >> pin;
  int num=pin;
  int goodvalue=0;

  while(num>10)
  {
    int value=1000;
    num=num/value;
    value=value/10;
  }
  num=num%10;

  for(int idx=0; idx<4; idx++)
  {
    int digit=(num+idx)%10;
    cout << moves[digit] << "," ;
  }

  int num1;
  while(pin>num1)
  {
    num1=1000;
    pin=pin-num*num1;
    num1=num1/10;
  }
}