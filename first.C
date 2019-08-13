#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	vector<string> s;
	for (string str; cin >> str;) {
		s.push_back(str);
	}
	sort(s.begin(), s.end());
	for (size_t i{0}; i < s.size(); ++i) {
		if (i == 0 || s[i-1] != s[i])
			cout << s[i] << " ";
	}
	cout << endl;
}
