#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--){
    	int n;
    	cin>>n;
    	map<int,int> m;
    	int x;
    	while(n--){
    		cin>>x;
    		m[x]++;
		}
		cout<<m[0]<<endl;
	}
}
