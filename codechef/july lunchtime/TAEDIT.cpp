#include<bits/stdc++.h>
using namespace std;

int main()
{std::ios_base::sync_with_stdio(false);
    long long q,pos,len;
    cin>>q;
    char k;
    string str="",ss;
    while(q--)
    {
      cin>>k;
    if(k=='+')
    {

        cin>>pos>>ss;

          str.insert(pos,ss);


    }
    else
    {
        cin>>pos>>len;
        cout<<str.substr (pos-1,len)<<endl;
    }


    }


    return 0;
}
