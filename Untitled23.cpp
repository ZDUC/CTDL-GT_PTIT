#include <bits/stdc++.h>
using namespace std;

int n, s;
int a[30];

void testCase() {
    cin >> n >> s;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> dp(s + 1, INT_MAX);
    dp[0] = 0; 

    for (int i = 0; i < n; ++i) {
        for (int j = s; j >= a[i]; --j) {
            if (dp[j - a[i]] != INT_MAX) {
                dp[j] = min(dp[j], dp[j - a[i]] + 1);
            }
        }
    }
    int ans = dp[s];
    cout << (ans != INT_MAX ? ans : -1);
}

int main() {
    testCase();
    cout << endl;
}