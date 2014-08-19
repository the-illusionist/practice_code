#include <iostream>
using namespace std;

int main ()
{
 unsigned long n,a,fac;
 cin >> n;
 while (n--)
    {
    cin >> a;
    fac=1;
    while(a>=1)
    {fac=fac*a;
    a--;}
    cout << fac << endl;
    }
  return 0;
}
