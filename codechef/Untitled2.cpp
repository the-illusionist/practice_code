#include <bits/stdc++.h>
using namespace std;

int compare (const void *elem1, const void *elem2){
    return *(int*)elem1 - *(int*)elem2;
}

int main()
{   std::ios_base::sync_with_stdio(false);
    int t;
    long int i,j,n, k, s[100000], f[100000], p[100000];
    cin >> t;
    while (t--)
    {  long int count=0;
       cin >> n >> k;
        for(i=0; i<n; i++)
        {
            cin >> s[i] >> f[i] >> p[i] ;
        }
        qsort(f, n, sizeof(int), compare);
        for (j=1; j<=k; j++)
        {  long int temp_enter=0;
           for (i=0; i<n; i++)
           {
              if (s[i]>=temp_enter && p[i]==j)
              {
                  temp_enter=f[i];
                  count++;
              }
           }
        }
        cout << count<<endl;
    }

    return(0);
}
