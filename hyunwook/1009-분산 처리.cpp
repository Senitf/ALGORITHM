#include <iostream>
using namespace std;
int t = 0;
int a = 0, b = 0;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);


	cin >> t;
	while (t--) {
		long long result = 1;
		cin >> a >> b;
		result = a;
		for (int i = 0; i < b - 1; i++) {
			result *= a;
			result %= 10;
		}
		result %= 10;
		if (result == 0)
			cout << 10 << "\n";
		else
			cout << result << "\n";
	}
}