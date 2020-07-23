#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> v;
int N, M, tmp;
bool func(int key){
    int start = 0;
    int end = N - 1;
    int mid;
    while(end >= start){
        mid = (start + end) / 2;
        if(v[mid] == key)
            return true;
        else if(v[mid] > key)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return false;
}
int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> N;
    for(int i = 1; i <= N; i++){
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    cin >> M;
    while(M--){
        cin >> tmp;
        if(func(tmp))
            cout << 1 << " ";
        else
            cout << 0 << " ";
    }
    cout << '\n';
}
