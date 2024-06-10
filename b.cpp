#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, s; cin >> n >> m >> s;

    int res = -1;
    for(int i = m; i > n; i--){
        int a = i;
        int sum = 0;
        while(a > 0){
            sum+= a%10;
            a /= 10;
        }
        if(sum == s){
            res = max(res, i);
        }
    }

    cout << res << endl;
}