#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	vector<string> v;
	map<string,int> m;
	string x;
	for(int i=0;i<n;i++){
		cin>>x;
		m[x]++;
	}
	for(auto i:m){
		v.push_back(i.first);
	}
	n = v.size();
    v.insert(v.begin(), 1, "");
	int a[k + 1];
	for (int i = 1; i <= k; i++)
		a[i] = i;
	while (1)
	{
		string s;
		for (int i = 1; i <= k; i++)
			cout<<v[a[i]]<<" ";
		cout<<endl;
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
}