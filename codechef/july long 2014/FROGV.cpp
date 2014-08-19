#include <bits/stdc++.h>
using namespace std;

int main()
{   std::ios_base::sync_with_stdio(false);
    long long n,k,p,a,x,y,i,j,starter,finisher,posx,posy;

    cin>>n>>k>>p;
    pair<long long, long long> paiir[n];
    long long connect[n],pos[n];
    for(i=0;i<n;i++)
    {
        cin>>a;
        paiir[i]=make_pair(a, i);
    }
    sort(paiir,paiir+n);
    connect[0]=0;
    for(i=0;i<n-1;i++)
    {

       if(i>0 && i<=connect[i-1])
        {
          connect[i]=connect[i-1];
        }


        else{

          for(j=i;j<n-1;j++)
        {
            if((paiir[j+1].first - paiir[j].first)>k)
          {

              break;
          }
        }
       connect[i]=j;
        }

    }
  /*
  for(i=0;i<n-1;i++)
    {
        cout<<connect[i]<<"a"<<i<<endl;
    }
*/

for(i=0;i<n;i++)
{
    pos[paiir[i].second]=i;
}

    while(p--)
    {

      cin>>x>>y;
      if(x==y)
      {
          cout<<"Yes"<<endl;
      }
      else
      {




  starter=min(pos[x-1],pos[y-1]);
  finisher=max(pos[x-1],pos[y-1]);



          if(connect[starter]<finisher)
          {
              cout<<"No"<<endl;

          }

     else
      {
          cout<<"Yes"<<endl;
      }

      }
    }

 return 0;
}
