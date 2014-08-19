#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
cin >> t;
while(t--)
{   int a, b, i, letter_a[6], letter_b[6],max_a, max_b, a_dec, b_dec, ba, bb,sum;
    cin >> a>>b;
    for (i=0; i<5; i++)
    {
        letter_a[i]=a%10;
        a=a/10;
    }

    for (i=0; i<5; i++)
    {
        letter_b[i]=b%10;
        b=b/10;
    }
    max_a=0;
   for(i=0; i<5; i++)
   {
     if (letter_a[i]>max_a)
        max_a=letter_a[i];
   }
   ba=max_a+1;
    max_b=0;
   for(i=0; i<5; i++)
   {
     if (letter_b[i]>max_b)
        max_b=letter_b[i];
   }
   bb=max_b+1;
   b_dec=(bb)*(bb)*(bb)*(bb)*letter_b[4]+(bb)*(bb)*(bb)*letter_b[3]+(bb)*(bb)*letter_b[2]+(bb)*letter_b[1]+letter_b[0];

   a_dec=(ba)*(ba)*(ba)*(ba)*letter_a[4]+(ba)*(ba)*(ba)*letter_a[3]+(ba)*(ba)*letter_a[2]+(ba)*letter_a[1]+letter_a[0];

   sum=b_dec+a_dec;
   cout<<sum<<endl;
}


return (0);
}
