#include <bits/stdc++.h>
using namespace std;

vector<long long> primeFactors(long long a, vector<long long> b)
{
    while (a%2 == 0)
    {
        b.push_back(2);
        a = a/2;
    }
    for (long long i = 3; i <= sqrt(a); i = i+2)
    {
        while (a%i == 0)
        {
            b.push_back(i);
            a = a/i;
        }
    }
    if (a > 2)
        b.push_back(a);
    return b;
}

int main()
{   std::ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    long long n,count,i,j,temp,product;
    while(t--)
    {
        cin>>n;
        long long moves[n],run[n],c;
        for(i=0;i<n;i++)
        {

            cin>>moves[i];
            run[i]=0;
        }
        for(i=0;i<n;i++)
        { if(run[i]==0)
           {
            j=moves[i]-1;
            count=1;
            run[j]=1;
            while(j!=i)
            {
                count++;
                j=moves[j]-1;
                run[j]=1;
            }
            run[i]=count;
           }
        }


        vector<long long> v(run,run+n);
        vector<long long> p,q,x;
        product=1;
        if(!v.empty())
        {
            temp = v[0];
            p = primeFactors(temp,p);
            for(j = 1; j<v.size(); j++)
            {
                q = primeFactors(v[j],q);
                set_union(p.begin(), p.end(), q.begin(), q.end(),back_inserter(x));
                p = x;
                x.clear();
                q.clear();
            }
        }
        for(j = 0; j<p.size(); j++)
            product = (product*p[j])%1000000007;
    cout<<product<<endl;
    }

return 0;
}
