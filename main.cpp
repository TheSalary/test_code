#include <bits/stdc++.h>
#include "iostream"
using namespace std;
int n,m;
char filed[105][105];

void dfs(int i,int j){
    filed[i][j] = '.';

    for (int dx = -1; dx <= 1; ++dx) {
        for (int dy = -1; dy <= 1; ++dy) {
            int nx = i + dx,ny = j + dy;
            if(nx >= 0 && nx < n && ny >=0 && ny < m && filed[nx][ny] == 'W') dfs(nx,ny);
        }
    }

}

int main() {
    cin>>n>>m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin>>filed[i][j];
        }
    }
    int k=0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if(filed[i][j] == 'W'){
                dfs(i,j);
                ++k;
            }
        }
    }
    cout<<k<<endl;
    return 0;
}
