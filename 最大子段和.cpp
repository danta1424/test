#include <iostream>
#include <algorithm>
using namespace std;

int max_sum(int* arr, int n) {
	int pre = 0, max1 = 0;
	for (int i = 1; i <= n; ++i) {
		max1 = max(max1, pre = pre > 0 ? pre + arr[i] : arr[i]);
	}
	return max1;
}

int main() {
	int n, a[100];
	while (cin >> n) {
		for (int m = 1; m <= n; m++)
			cin >> a[m];
		cout << max_sum(a,n) << endl;
		cout << '\n';
	}
	return 0;
}