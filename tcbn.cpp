#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        long long total = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            total += arr[i];
        }

        if(total % 2 != 0){
            cout << "NO" << endl;
            continue;
        }

        int target = total / 2;
        vector<bool> dp(target + 1, false);
        dp[0] = true;

        for(int i = 0; i < n; i++){
            for(int j = target; j >= arr[i]; j--){
                if(dp[j - arr[i]]) dp[j] = true;
            }
        }

        if(dp[target]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}