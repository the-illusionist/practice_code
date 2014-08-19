#include <iostream>
using namespace std;

int main ()
{
 long long a,l, k, c,count;
 cin >> a;
 while(a--)
 {
    cin >>k;
    c=5;
    count=0;
    while (k>=c)
    {l=k/c;
    count=count+l;
    c=c*5;
    }
    cout << count <<endl;
 }
  return 0;
}
