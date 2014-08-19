#include <bits/stdc++.h>
using namespace std;

int main()
{   ios_base::sync_with_stdio(false);
    int t;
    unsigned long i,j,n, l, s, f, p;
    cin >> t;
    while (t--)
    {  unsigned long  count=0;
       cin >> n >> l;
        pair<unsigned long, pair<unsigned long, unsigned long> > k[n];
        for(i=0; i<n; i++)
        { cin >> s >> f >> p;
          k[i]=make_pair(p,make_pair(f, s));
        }
        sort (k, k+n);

        j=1;
        unsigned long temp_enter=0;
           for (i=0; i<n; i++)
           {
               if(k[i].first==j)
            {
              if (k[i].second.second>=temp_enter )
              {
                  temp_enter=k[i].second.first;
                  count++;
              }
            }
              if ( k[i].first!=j)
              {
                  j=k[i].first;
                  temp_enter=0;
                  i=i-1;
              }
           }

        cout << count<<endl;
    }

    return(0);
}
