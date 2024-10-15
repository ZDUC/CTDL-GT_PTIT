#include <bits/stdc++.h>

using namespace std;

int n;
int a[100][100], check[100];

void input()
{
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++)
			cin>>a[i][j];	
	}	
}

void dfs(int u)
{
	check[u]=1;
	for (int i=1;i<=n;i++){
		if (!check[i]&&a[u][i])
			dfs(i);
	}
}

bool solve()
{
	for (int i=1;i<=n;i++)
	{
		int s=0;	
		for (int j=1;j<=n;j++)
			s+=a[i][j];
		if (s%2)
			return false;
	}	
	return true;
}

bool tplt()
{
	int ans=0;
	for (int i=1;i<=n;i++)	
	{
		if (!check[i])
		{
			dfs(i);
			ans++;
		}
	}
	return ans==1;
}

int main()
{
	input();
	if (solve()&&tplt())
		cout<<"La do thi Euler";
	else
		cout<<"Khong phai do thi Euler";
	return 0;
}