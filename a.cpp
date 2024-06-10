#include <bits/stdc++.h>
using namespace std;

int main(){
    int d, a, n, c; cin >> d >> a >> n;
    c = n;
    if(n > 15){
        c = 15;
    }

    cout << (d + (c-1)*a)*(31-n+1) << endl;
}