#include <bits/stdc++.h>
using namespace std;
long long m=1e9+7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n;
        n=n%m;
        vector<long long> a;
        a.push_back(0);
        a.push_back(1);
        for(int i=2;i<=n;i++){
        	a.push_back(((a[i-1]%m)+(a[i-2]%m))%m);
		}
		cout<<a[n]<<endl;
    }
}