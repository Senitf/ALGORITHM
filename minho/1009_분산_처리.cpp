#include <iostream>
using namespace std;
long long a, b, c, d;
int main(){
    cin >> a;
    while(a--){
        cin >> b >> c;
        d = b;
        while(c--){
            b = b * d % 10;
        }
    }
}
