#include <iostream>
#include <queue>
using namespace std;
int n,tmp, nxtx, nxty;
char arr[27][27];
priority_queue<int> q;
struct move{
    int mvx;
    int mvy;
};
struct move m[4] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
void dfs(int x, int y){
    arr[y][x] = '0';
    tmp++;
    for(int i = 0; i < 4; i++){
        nxtx = x + m[i].mvx;
        nxty = y + m[i].mvy;
        if(nxtx >= 1 && nxtx <= n && nxty >= 1 && nxty <= n){
            if(arr[nxty][nxtx] == '1'){
                dfs(nxtx, nxty);
            }
        }
    }
}
int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(arr[i][j] == '1'){
                tmp = 0;
                dfs(j, i);
                q.push(tmp * -1);
            }
        }
    }
    cout << q.size() << '\n';
    while(!q.empty()){
        cout << q.top() * -1 << '\n';
        q.pop();
    }
}

