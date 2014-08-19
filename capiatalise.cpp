#include<iostream>
using namespace std;
int main()
{
    string s1;
	getline(cin, s1);

	for(int i=0;i<s1.length();i++)
	{
	    s1[0]=toupper(s1[0]);
		if (s1[i]==' ')
			{
			    s1[i+1]=toupper(s1[i+1]);
            }
			cout<<s1[i];
	}
	return 0;
}
