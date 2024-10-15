#include <bits/stdc++.h>
using namespace std;
int n, u, v, ans, a[6][6];
int rx[] = { 1, -1, 0, 0 };
int ry[] = { 0, 0, 1, -1 };
void Try(int x, int y, int s) {
	if (x == 5 && y == 5 && s + n == 25) {
		ans++;
		return;
	}
	for (int i = 0;i < 4;i++) {
		int xx = x + rx[i];
		int yy = y + ry[i];
		if (xx >= 1 && xx <= 5 && yy >= 1 && yy <= 5 && a[xx][yy] == 0) {
			a[xx][yy] = 1;
			Try(xx, yy, s + 1);
			a[xx][yy] = 0;
		}
	}
}
int main() 
{
	cin >> n;
	a[1][1] = 1;
	for (int i = 0;i < n;i++) {
		cin >> u >> v;
		a[u][v] = 1;
	}
	Try(1, 1, 1);
	cout << ans;
}