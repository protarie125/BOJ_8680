#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, h;
	cin >> n >> h;
	n -= 1;

	auto ans = int{ 0 };
	for (int i = 0; i < h; ++i) {
		ans *= 2;
		ans += n % 2;
		n /= 2;
	}

	cout << ans;

	return 0;
}