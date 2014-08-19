#include <bits/stdc++.h>
using namespace std;
int main()
{   std::ios_base::sync_with_stdio(false);
    unsigned long n, q,x,y,temp,i,j;
    int count,count2,count3, diff;
    cin>>n>>q;
    unsigned long a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

     count=0;
      for(i=0;i<n-1;i++)
      {
          for(j=i+1;j<n;j++)
          {
              if( a[i]>a[j])
              {
                  count=(count+1)%2;
              }
          }
      }

    while(q--)
    {
        cin>>x>>y;
        count2=0;
      for(i=x-1;i<y-1;i++)
      {
          for(j=i+1;j<y;j++)
          {
              if( a[i]>a[j])
              {
                  count2=(count2+1);
              }
          }
      }
      cout<<"b"<<count2<<endl;;
      temp=a[x-1];
      a[x-1]=a[y-1];
      a[y-1]=temp;

      count3=0;
      for(i=x-1;i<y-1;i++)
      {
          for(j=i+1;j<y;j++)
          {
              if( a[i]>a[j])
              {
                  count3=(count3+1);
              }
          }
      }
      cout<<"a"<<count3<<endl;;
      if(count2>count3)
      diff=count2-count3;
      else
        diff=count3-count2;

      diff=diff%2;

      if(count==diff)
      {
          count=0;
      }
      else
        {
        count=1;
        }


    cout<<count<<endl;



    }


}
