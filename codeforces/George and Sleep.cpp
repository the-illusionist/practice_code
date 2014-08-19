#include <bits/stdc++.h>
using namespace std;

int main()
{ string s,t,sh,sm,th,tm;
int dm,dh;
    cin>>s;
    cin>>t;
    sh=s.substr(0,2);
    sm=s.substr(3,4);
    th=t.substr(0,2);
    tm=t.substr(3,4);
    int sih = atoi(sh.c_str());
    int sim = atoi(sm.c_str());
    int tih = atoi(th.c_str());
    int tim = atoi(tm.c_str());
    if(sim>=tim)
    {
        dm=sim-tim;
    }
    else
    {
        dm=sim+60-tim;
        sih=sih-1;
    }
    if(sih>=tih)
    {
        dh=sih-tih;
    }
    else
    {
        dh=sih+24-tih;
    }
    if(dh/10>0 && dm/10>0)
    {cout<<dh<<':'<<dm<<endl;}
    else if(dh/10>0 && dm/10==0)
    {cout<<dh<<':'<<'0'<<dm<<endl;}
    else if(dh/10==0 & dm/10>0)
    {cout<<'0'<<dh<<':'<<dm<<endl;}
    else if(dh/10==0 & dm/10==0)
    {cout<<'0'<<dh<<':'<<'0'<<dm<<endl;}
}
