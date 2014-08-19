#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
int n,q,i,t;
cin>> n;
unsigned long arr[n];
for(i=0;i<n;i++)
{
    cin>>arr[i];
}
cin>>t;
while(t--)
{  int a,k,num,count=0,p;
   cin>>a;
    for(i=0;i<n;i++)
    {
        if (arr[i]==a)
        {   num=i;
            p=1;
            count++;
            for(k=num-1;k>=0;k--)
            {
                if (arr[k]>a)
                {
                    count++;
                    p++;
                }
                else
                {
                    break;
                }
            }
            for(k=num+1;k<n;k++)
                {
                if(arr[k]>=a)
                {
                    count=count+p;
                }
                else break;
            }
        }
    }
  cout<<count<<endl;
}
}
