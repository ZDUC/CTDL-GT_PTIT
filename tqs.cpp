#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k,dem=0;
		cin >> n >> k;
		int a[k + 1],b[k+1];
		for (int i = 1; i <= k; i++){
			cin>>a[i];
			b[i]=a[i];
		}	
		int ok = 0;
		for (int i = k; i >= 1; i--)
		{
			if (a[i] != n - k + i)
			{
				a[i]++;
				for (int j = i + 1; j <= k; j++)
					a[j] = a[j - 1] + 1;
				break;
			}
		}
		for (int i = 1; i <= k; i++){
			for(int j=0;j<=k;j++)
				if(a[i]==b[j]) ok++;
		}
		if(k-ok==0) cout<<k<<endl;
		else cout<<k-ok<<endl;
	}
}