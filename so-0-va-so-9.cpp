#include <bits/stdc++.h>
using namespace std;
void xl(int n)
{
	queue<int> q;
	q.push(9);
	while(!q.empty())
	{
		int x=q.front();
		q.pop();
		if(x%n==0)
		{
			cout<<x<<endl;
			break;
		}
		q.push(x*10);
		q.push(x*10+9);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		xl(n);
	}
}