#include <bits/stdc++.h>
using namespace std;

int n, k, c[30];
string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // Đủ 26 chữ cái tiếng Anh

void in() {
	cout<<"T";
    for(int i = 1; i <= k; i++)
        cout << a[c[i] - 1]; // Lưu ý: `c[i] - 1` vì mảng `a` bắt đầu từ 0
    cout << endl;
}

void quaylui(int i) {
    for(int j = c[i - 1] + 1; j <= n - k + i; j++) {
        c[i] = j;
        if(i == k) in();
        else quaylui(i + 1);
    }
}

int main() {
    cin >> n >> k;
    quaylui(1);
    return 0;
}
