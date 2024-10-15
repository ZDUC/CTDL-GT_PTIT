#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	double dem=n/64+n/32+n/16+n/8+n/4+n/2;
	if(dem<k) cout<<"No";
	else cout<<"Yes";
}