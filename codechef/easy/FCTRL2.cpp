#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t, n, i, k, j,c,temp,x[200];
	cin>>t;
	while(t--)
	{
		i=0;
		cin>>n;
		k=n;
		while(k)
		{
			x[i]=k%10;
			k=k/10;
			i++;
		}
		j=i;
		while(--n)
		{
			c=0;
			for(i=0;i<j;i++)
			{
				temp=n*x[i];
				x[i]=(temp+c)%10;
				c=(temp+c)/10;
			}
			while(c)
			{
				x[i]=c%10;
				c=c/10;
				i++;
			}
			j=i;
		}
		for(i--;i>=0;i--)
			cout<<x[i];
		cout<<"\n";
	}
	return 0;
}
