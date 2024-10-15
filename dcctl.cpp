#include <bits/stdc++.h>
using namespace std;
string zfill(int nb){
	if(nb<10) return "00"+to_string(nb);
	else if(nb<100) return "0"+to_string(nb);
	else return to_string(nb);
}
bool ss(vector<int> a, vector<int> b){
	string s1="";
	string s2="";
	for(auto i : a){
		s1+=zfill(i);
	}
	for(auto i : b){
		s2+=zfill(i);
	}
	return s1<s2;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n,tk;
		cin >> n;
		int k=n;
		int b[n+1];
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		sort(b,b+n);
		int dem=0;
		set<string> st;
		vector<vector<int>> vv;
		while(k>0){
			int a[k + 1];
			for (int i = 1; i <= k; i++)
				a[i] = i;
			while (1)
			{
				int tong=0;
				vector<int> v;
				v.clear();
				string s="";
				for (int i = 1; i <=k ; i++){
					tong=tong+b[a[i]-1];
				}
				if(tong%2!=0){
					for(int i=k;i>1;i--){
						s+=to_string(b[a[i]-1])+" ";
						v.push_back(b[a[i]-1]);
					}
					s+=to_string(b[a[1]-1]);
					v.push_back(b[a[1]-1]);
				}
				if(tong%2!=0){
					dem=1;
					st.insert(s);
					vv.push_back(v);
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
			sort(vv.begin(),vv.end(), ss);
			for(auto i: vv){
				for(int j = 0; j < i.size(); j++){
					cout << i[j] << " ";
				}
				cout<<endl;
			}
		}
	}
}