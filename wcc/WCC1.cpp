#include <iostream>
using namespace std;

int main ()
{
 int a , b , c ,i, d, k, t, n;
 cin >> t;

 for (i=1; i<(t+1); i++)
 {
 k=1;
 cin >> n;
 n=n+1;
 while (k!=2)
  {
    a=n%10;
    b=(n%100-n%10)/10;
    c=(n%1000-n%100)/100;
    d=(n-n%1000)/1000;

    if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
    {
    cout << n<<endl;
    k=2;
    }
    else
    {
    n++;
    }
    }
   }

  return 0;
}
