#include<iostream>
#include<set>
#include<sstream>

using namespace std;

void permute(set <int>);

int n;
set <int> group;
set <int> :: iterator it;
string fin="";
int flag=0;

int main()
{
    cout<<"Welcome to the Permutations Generator!\n";
    cout<<"Please enter a value of N: ";
    cin>>n;

    int i=0;
    while(i<n)
    {
        group.insert(i+1);
        i++;
    }
    cout<<"The permutations are:\n\n";
    permute(group);
}

void permute(set <int> g)
{
    if(g.size()==0)
    {
        cout<<fin<<"\n";
        flag=1;
        return;
    }
    set <int> tg;
    set <int> :: iterator tempit;
    tempit=g.begin();
    while(tempit!=g.end())
    {
        stringstream ss;
        ss<<*tempit;
        fin+=ss.str();
        tg=g;
        tg.erase(*tempit);
        tempit++;
        permute(tg);
        if(flag==1)
        {
            flag=0;
            if(fin.size()>0)
            {
                fin.erase(fin.size()-1);
            }
        }
    }
    if(fin.size()>0)
    {
        fin.erase(fin.size()-1);
    }
}
