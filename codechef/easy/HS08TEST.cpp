#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main ()
{
 int a ;
 float b, c;
 cin >> a >> b;

 if (a%5==0 && b-0.50>a)
    {c=b-a-0.50;
    cout << setprecision(2) <<fixed << c << endl;}
 else
    cout << setprecision(2) <<fixed << b << endl;
  return 0;
}
