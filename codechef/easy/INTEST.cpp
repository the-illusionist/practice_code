#include <iostream>
using namespace std;

int main ()
{
 long long a,b,i,k,count=0 ;
 cin >> a >> b;
 while(a--)
  {
   cin >> k;
    if (k%b==0)
    {
        count++;
    }
  }
  cout << count;
  return 0;
}
