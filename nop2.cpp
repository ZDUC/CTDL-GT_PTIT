#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll mod = 1e9 + 7;

int a[100];
int n, k;
vector<int> b;
set<string> ans;
void Try(int i = 1){
	for(int j = a[i - 1] + 1; j <= n - k + i; ++j){
		a[i] = j;
		if(i == k){
            string r = "";
			for(int l = 1; l <= k; ++l){
				cout<< a[l] << " ";
				r += to_string(b[a[l] - 1]);
			}
            ans.insert(r);
            cout << endl;
		}else
			Try(i + 1);
	}
}

int main(){

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> k;

	for(int i = 0; i < n; ++i){
		int tmp;
		cin >> tmp;
        b.push_back(tmp);
	}
	n = b.size();
	Try();
    for(auto i : ans){
        cout << i << endl;
    }
	return 0;
}