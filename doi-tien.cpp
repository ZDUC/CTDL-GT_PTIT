#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	int b[6] = {1, 2, 5, 10, 20, 50};
	while (t--)
	{
		long long n,dem=0;
		cin >> n;
		int i=5;
		int check=0;
		while(n<=0)
		{
			if(n>=b[i])
			{
				dem++;
				n=n-b[i];
			}
			i--;
			if(n==0) check=1;
			if(i==-1) break;
		}
		if(check==0) cout<<dem<<endl;
		else cout<<-1<<endl;
	}
}