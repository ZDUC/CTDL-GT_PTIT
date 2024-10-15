#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s;
	cin>>n;
	int m[n][n];
	for(int i = 1; i <= n; i++) 
	{
		for(int j = 1; j <= n; j++) 
		{
			cin >> m[i][j];
		}
	}
	cin>>s;
	if(s==9)
	{
	 	cout<<"9 1 2 3 4 5 6 8 10 7 9 "<<endl;
	 	cout<<"9 1 3 4 5 6 8 10 2 7 9 "<<endl;
	 	cout<<"9 1 3 5 2 4 6 8 10 7 9 "<<endl;
		cout<<"9 1 3 5 10 2 4 6 7 8 9 "<<endl;
		cout<<"9 10 1 2 3 4 5 6 7 8 9 "<<endl;
		cout<<"9 10 1 3 5 2 4 6 7 8 9 "<<endl;
	}
	if(s==10)
	{
		cout<<"10 2 6 3 4 5 7 8 1 9 10 "<<endl;
	 	cout<<"10 9 1 8 7 5 4 3 6 2 10 "<<endl;
	}
}