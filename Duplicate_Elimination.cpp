/*
 * =====================================================================================
 *
 *    Description: Duplicate Elimination
 *
 *        Version:  1.0
 *        Created:  22/04/16 13:20:05
 *       Revision:  none
 *       Compiler:  g++
 *
 * =====================================================================================
 */
#include <iostream>
using namespace std;

const unsigned int limit{5};

void addToArray(int[], int);

int main() {
	int n[limit] = { }, v{0};
	for (size_t i{0}; i < limit; ++i) {
		cout << "[" << (i+1) <<"/20]--Enter your value between 10 and 100: ";
		cin >> v;
		if (v >= 10 && v <= 100) addToArray(n, v);	
		else --i;
	}
	for (auto x : n) {
		if (x != 0) cout << x << " ";
	}
	cout << endl;
}
void addToArray(int n[], int v) {
	
	static unsigned int limit{0};
	
	bool duplicate = false;
	for (size_t i{0}; i <= limit; i++) {
		if (n[i] == v) {
			duplicate = true;
			break;
		}
	}
	if (!duplicate) {
		n[limit] = v;
		++limit;
	}
}
