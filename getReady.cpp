/**Question : find (K) value ka lower or minimus length koto hoy, using prefix sum binary search */ 
#include <iostream>
using namespace std;
const int maxn = (int)2e5+5;
int a[maxn], sum[maxn];
int lowerBound(int low, int hi, int k) {
	int pos = hi+1;
	while (low <= hi) {
		int mid = (low+hi)/2;
		if (sum[mid] >= k) {
			pos = mid;
			hi = mid - 1;
		} else low = mid + 1;
	}
	return pos;
}
int main() {
	int n, k;
	cin >> n >> k;
	sum[0] = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		sum[i] = sum[i-1] + a[i];
	}
	int mini = n+1;
	for (int i = 1; i  <= n; i++) {
		//int j = lowerBound(1, n+1, k+sum[i-1]);
		int j = lower_bound(sum+1, sum+n+1, k + sum[i-1]) - sum; //1-indexing use kiya, iss liye (- sum+1) korte hobe nah!
		if (j <= n) 
			mini = min(mini, j-i+1);
	}
	cout << mini << '\n';
	return 0;
}
