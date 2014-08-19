#include <bits/stdc++.h>
using namespace std;

int main()
{   ios_base::sync_with_stdio(false);
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
        for(i=0; i<n; i++)
        {
            for(j=0;j<i;j++)
            {   if (f[i]<f[j])
                {
                long int temp1=f[i];
                f[i]=f[j];
                f[j]=temp1;
                long int temp2=s[i];
                s[i]=s[j];
                s[j]=temp2;
                long int temp3=p[i];
                p[i]=p[j];
                p[j]=temp3;
                }
            }
        }
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
