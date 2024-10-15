#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int k=n;
	int b[n+1];
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	int dem=0;
	set<string> st;
	vector<int> v;
	while(k>1){
		int a[k + 1];
		for (int i = 1; i <= k; i++)
			a[i] = i;
		while (1)
		{	
			int tong=0;
			string s="";
			for (int i = 1; i<=k; i++){
				v.push_back(b[a[i]]);
			}
			for (int i = 1; i<v.size(); i++){
				if(v[i-1]>v[i]) tong=1;
			}
			if(tong==0){
				for(int i=0;i<v.size()-1;i++){
					s+=to_string(v[i])+" ";
				}
				s+=to_string(v[v.size()-1]);
			}
			v.clear();
			if(tong==0){
				dem=1;
				st.insert(s);
			}
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
		k--;
	}	
	for(auto i: st){
		cout<<i<<endl;
	}
}