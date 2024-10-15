#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int m[n];
		deque<int> s;
		for(int i=0;i<n;i++)
		{
			cin>>m[i];
			while(s.size()&&m[s.back()]<=m[i])
			{
				s.pop_back();
			} 
			s.push_back(i);
			while(s.size()&&s.front()<=i-k)
			{
				s.pop_front();
			}
			if(i>=k-1) cout<<m[s.front()]<<" ";
		}
		cout<<endl;
	}
}