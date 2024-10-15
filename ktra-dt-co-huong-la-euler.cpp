#include <bits/stdc++.h>
using namespace std;
int n,dem=1;
int m[1002][1002];
int u,check[1000]={0};
bool dfs(int u)
{
	stack<int>s;
	check[u]=1;
	s.push(u);
	while(!s.empty())
	{
		int k=s.top();
		s.pop();
		for(int i=1;i<=n;i++){
			if(m[k][i]==1 && check[i]==0){
				check[i]=1;
				s.push(k);
				s.push(i);
				dem++;
				break;
			}
		}
	}
	if(dem==n) return true;
	else return false;
}
void nhap() 
{
	cin >> n;
	for(int i = 1; i <= n; i++) 
	{
		for(int j = 1; j <= n; j++) 
		{
			cin >> m[i][j];
		}
	}
}
bool bb()
{
	int ra[1000]={0},vao[1000]={0};
	for(int i = 1; i <= n; i++) 
	{
		for(int j = 1; j <= n; j++) 
		{
			ra[i]=ra[i]+m[i][j];
		}
	}
	for(int i = 1; i <= n; i++) 
	{
		for(int j = 1; j <= n; j++) 
		{
			vao[i]=vao[i]+m[j][i];
		}
	}
	for(int i = 1; i <= n; i++) 
	{
		if(ra[i]!=vao[i]) return false;
	}
	return true;
}
void kq() 
{
	nhap();
	if(dfs(1)==1&&bb()==1)
	{
		cout << "La do thi Euler";
	}
	else 
	{
		cout << "Khong phai do thi Euler";
	}
}
int main()
{
	kq();	
}