#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	stack<int> s;
	string x;
	while(cin>>x)
	{
		if(x=="push")
		{
			cin>>n;
			s.push(n);
		}
		if(x=="pop")
		{
			s.pop();
		}
		if(x=="show")
		{
			if(s.empty())
			{	
				cout<<"empty";	
			}
			else
			{	
				stack<int> k;
				while(!s.empty())
				{
					
					k.push(s.top());
					s.pop();
				}
				while(!k.empty())
				{
					cout<<k.top()<<" ";
					s.push(k.top());
					k.pop();
				}
			}
		}
		cout<<endl;
	}
}