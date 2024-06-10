#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, s; cin >> n >> s;
    unordered_map<int, int> m;
    int ans = 0;
    for(int i = 0, sum = 0; i < n; i++){
        m[sum]++;
        int a; cin >> a;
        sum += a;
        ans += m[sum-s];
    }
    cout << ans << endl;
}