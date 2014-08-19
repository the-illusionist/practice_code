#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{   int n;
    cout<<"Enter the value of N: ";
    cin>>n;
    int i=0;
    string str="";
    while(i<n)
    {  stringstream ss;
       ss << i+1;
       string temp = ss.str();
    str.append(temp);
    }
    cout<<str;
}
