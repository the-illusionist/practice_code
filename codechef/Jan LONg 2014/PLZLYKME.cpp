#include <bits/stdc++.h>
using namespace std;

int main()
{  ios_base::sync_with_stdio(false);
    int t,i;
   cin >> t;
   while(t--)
   {

   long long int l, d, s, c;
   cin >> l >> d>>s>>c;

   for(i=1; i<d; i++)
   {
       s=s+s*c;
       if(s>=l)
        break;
   }
   if (s>=l)
    cout << "ALIVE AND KICKING" << endl;
   else
    cout << "DEAD AND ROTTING" << endl;
   }
    return(0);
}
