#include <iostream>
using namespace std;
bool chess[17][17];
int n, ans;
bool check(int x, int y){
    bool tmp = true;
    for(int i = 1; i < x; i++){
        if(chess[y][i])
            tmp = false;
    }
    for(int i = 1; 1 <= y - i; i++){
        if(chess[y - i][x - i])
            tmp = false;
    }
    for(int i = 1; y + i <= n; i++){
        if(chess[y + i][x - i])
            tmp = false;
    }
    return tmp;
}
void func(int cur){
    if(cur == n + 1){
        ans++;
        return;
    }
    for(int i = 1; i <= n; i++){
        if(check(cur, i)){
            chess[i][cur] = true;
            func(cur + 1);
        }
        chess[i][cur] = false;
    }
}
int main(){
    cin >> n;
    func(1);
    cout << ans << '\n';
}
