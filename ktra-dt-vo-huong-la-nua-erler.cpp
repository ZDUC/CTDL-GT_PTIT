#include <bits/stdc++.h>
using namespace std;
int n;
int m[1002][1002];
vector<int> v;
bool kt() 
{
	int check = 0;
	for(int i = 1; i <= n; i++) 
	{
		int tong = 0;
		for(int j = 1; j <= n; j++) 
		{
			tong =tong+m[i][j];
		}
		if(tong % 2 == 1) 
		{
			check++;
			v.push_back(i);
		}
	}
	if(check == 0 || check == 2) return true;
	return false;
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
void kq() 
{
	nhap();
	if(kt()) 
	{
		cout << "La do thi nua Euler";
	}
	else 
	{
		cout << "Khong phai do thi nua Euler";
	}
}

int main() 
{
	kq();
}