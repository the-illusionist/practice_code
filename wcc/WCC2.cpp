#include <iostream>
using namespace std;

int main ()

{
int t, i, al, ar, bl, br;
cin >> t;
for(i=1; i<(t+1); i++)
{
cin >> al>>ar;
cin >> bl>>br;
    if ( ((al-2)<br && br<((al+1)*2+1)) || ((ar-2)<bl && bl<((ar+1)*2+1)))
  cout << "YES"<<endl;
else
  cout << "NO"<<endl;

}
  return 0;
}
