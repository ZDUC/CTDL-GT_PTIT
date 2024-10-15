#include <bits/stdc++.h>
using namespace std;
int main()
{

	int n, k;
	cin >> n >> k;
	int m[n+1];
	int ds[n+1];
	int check[1001];
	int tt=1;
	for (int i = 1; i <= n; i++){
		cin>>m[i];
		if(check[m[i]]==0){
			check[m[i]]=1;
			ds[tt]=m[i];
			tt=tt+1;
		}
	}
	sort(ds,ds+tt+1);
	cout<<ds<<endl;
	int a[k + 1];
	for (int i = 1; i <= k; i++)
		a[i] = i;
	while (1)
	{
		for (int i = 1; i <= k; i++)
			cout << ds[a[i]]<< " ";
		cout << endl;
		int ok = 0;
		for (int i = k; i >= 1; i--)
		{
			if (a[i] != n - k + i)
			{
				ok = 1;
				a[i]++;
				for (int j = i + 1; j <= k; j++)
					a[j] = a[j - 1] + 1;
				break;
			}
		}
		if (ok == 0)
			break;
	}
	cout << endl;
}