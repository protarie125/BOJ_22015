#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b, c;
	cin >> a >> b >> c;

	auto maxV = max({ a, b, c });

	auto add = (maxV - a) + (maxV - b) + (maxV - c);
	cout << add;

	return 0;
}