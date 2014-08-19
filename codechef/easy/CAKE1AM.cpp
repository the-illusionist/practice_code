#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while (t--)
{  int x1,x2,y1,y2,k1,k2,l1,l2,a1,a2,a3=0,area,r,l,t,b;
   cin >> x1>>y1>>x2>>y2;
   cin >> k1>>l1>>k2>>l2;
   a1=(x2-x1)*(y2-y1);
   a2=(k2-k1)*(l2-l1);
   l=max(x1,k1);
   r=min(x2,k2);
   b=max(y1,l1);
   t=min(y2,l2);
   a3=(r-l)*(t-b);
   if(x1>k2 || x2<k1 || y2<l1 || y1>l2)
   {a3=0;}

   area=a1+a2-a3;
   cout<<area<<endl;
}
    return(0);
}
