#include <bits/stdc++.h>
using namespace std;
string zfill(int number){
	if(number < 10) return "00" + to_string(number);
	else if(number < 100) return "0" + to_string(number);
	return to_string(number);
}
bool cmp(vector<int> a, vector<int> b){
	string s1 = "";
	string s2 = "";
	for(auto i : a){
		s1 +=zfill(i);
	}
	for(auto i : b){
		s2 += zfill(i);
	}
	return s1 < s2;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n,tk;
		cin >> n >> tk;
		int k=n;
		int b[n+1];
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		sort(b,b+n);
		int dem=0;
		set<string> st;
		vector<string> v;
		vector<vector<int>> vv;
		while(k>0){
			int a[k + 1];
			for (int i = 1; i <= k; i++)
				a[i] = i;
			while (1)
			{
				int tong=0;
				string s="";
				vector<int> tmp;
				tmp.clear();
				for (int i = 1; i <=k ; i++){
					tong=tong+b[a[i]-1];
				}
				if(tong==tk){
					for(int i=1;i<k;i++){
						s+=to_string(b[a[i]-1])+" ";
						tmp.push_back(b[a[i] - 1]);
					}
					s+=to_string(b[a[k]-1]);
					tmp.push_back(b[a[k] - 1]);
				}
				if(tong==tk){
					dem=1;
					st.insert(s);
					vv.push_back(tmp);
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
		if(dem==0) cout<<-1<<endl;
		else{
			sort(vv.begin(), vv.end(), cmp);
			for(auto i : vv){
				cout << '[';
				for(int j = 0; j < i.size() - 1; j++){
					cout << i[j] << ' ';
				}
				
				cout << i[i.size() - 1] << "] ";
			}
			cout<<endl;
		}
	}
}