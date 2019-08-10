#include <iostream>
#include <ctime>
using namespace std;

const size_t arraySize{100};
const size_t numberOfLetters{26};

void creatArray(char []);
void displayArray(const char []);
void countLetters(const char [], int []);
void displayCounts(const int []);

int main() {
	char ch[arraySize];
	creatArray(ch);
	displayArray(ch);
	int counts[numberOfLetters] = { };
	countLetters(ch, counts);
	cout << endl;
	cout << endl;
	displayCounts(counts);
	cout << endl;
}

void creatArray(char ch[]) {
	srand(time(0));
	for (unsigned int i{0}; i < arraySize; ++i) {
		ch[i] = static_cast<char>('a' + rand() % ('z' - 'a' + 1));
	}
}

void displayArray(const char ch[]) {
	for (unsigned int i{0}; i < arraySize; ++i) {
		cout << ch[i] << ((i + 1) % 20 == 0 ? "\n" : " ");
	}
}

void countLetters(const char ch[], int counts[]) {
	for (unsigned int i{0}; i < arraySize; ++i) {
		++counts[ch[i] - 'a'];
	}
}

void displayCounts(const int counts[]) {
	for (unsigned int i{0}; i < numberOfLetters; ++i) {
		cout << "(" << counts[i] << static_cast<char>('a' + i) << ")" << ((i + 1) % 10 == 0 ? "\n" : " ");
	}
}
