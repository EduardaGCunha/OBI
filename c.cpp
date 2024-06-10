#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int m = n*n;
    int arr[m+1];
    int grid[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> grid[i][j];
            arr[grid[i][j]] = 1;
        }
    }

    int f = -1;
    for(int i = 1; i <= m; i++){
        if(arr[i] != 1){
            f = i;
            break;
        }
    }
    cout << f << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(grid[i][j] == 0){
                cout << i+1 << endl << j+1 << endl;
                break;
            }
        }
    }
}