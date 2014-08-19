#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        string a;
        cin >> a;
        int i;
        for(i = 0; i < a.length();)
        {
            if ((a[i]=='1' && a[i+1]=='0' && a[i+2]=='1') || (a[i]=='0' && a[i+1]=='1' && a[i+2]=='0'))
            {
                cout << "Good" <<endl;
                break;
            }
            else
                i++;
        }
        if (i== a.length())
            cout << "Bad"<<endl;
    }
    return(0);
}
