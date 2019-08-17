#include <iostream>
using namespace std;
struct Book {
	private:
		int bookId;
		char title[20];
		float price;

	public:
		void print() {
			printf("\tBook-Id: %d\n\tBook_Title: %s\n\tBook_Price: %.2f\n", bookId, title, price);
		}
		void input() {
			cout << "Enter Book-ID: ";
			cin >> bookId;
			cout << "Enter Book-Title: ";
			cin >> title;
			cout << "Enter Book-Price: $";
			cin >> price;
		}
};
struct Complex {
	public:
		void setData() {
			cout << "Enter your first number: ";
			cin >> num1;
			cout << "Enter your second number: ";
			cin >> num2;
		}
		/* Complex add(Complex& x) {
		 *	Complex temp;
		 *	temp.num1 = num1 + x.num1;
		 *	temp.num2 = num2 + x.num2;
		 *	return temp;
		 * }*/
		void add(Complex& x) {
			x.num1 += num1;
			x.num2 += num2;
		}
		/*Operator Overloading...
		 * void operator +() {
		 *	x.num1 += num1;
		 *	x.num2 += num2;
		 * }
		 * //now Unary type Overloding...
		 * void operator -() {
		 *	x.num1 = -num1;
		 *	x.num2 = -num2;
		 * }*/
		/* PreIncrement & PostIncrement Overloding....
		 * void operator ++() {	//PreIncrement!!!
		 *	x.num1 = ++num1;
		 *	x.num2 = ++num2;
		 * }
		 * void operator ++(int) { //PostIncrement!!!
		 *	x.num1 = num1++;
		 *	x.num2 = num2++;
		 * }*/
		void showData() {
			cout << num1 << ", " << num2 << endl;
		}
	private:
		int num1, num2;
};
int main() {
	Book b1;
	//or Book b1{101, "C++", 300.0}; kind a like constructor, But without anykinnd it :)
	b1.input();
	b1.print();
	//here is another example!!
	Complex c1, c2;
	cout << "Enter your first structure data: " << endl;
	c1.setData();
	cout << "Enter your second structure data: " << endl;
	c2.setData();
	cout << "Here's your first structure data: " << endl;
	c1.showData();
	cout << "Here's your second structure data: " << endl;
	c2.showData();
	c1.add(c2);
	//c3 = c1.add(c2);
	
	/* for using Operator Overloading....
	 * c3 = c1.operator+(c2);
	 * (Or) c3 = c1 + c2; //here (+) operator working in Overloading...
	 * So, that's (+) signed can do two work now with Operator Overloading!
	 */
	/* Unary type Overloading
	 * c3 = -c1;
	 * (Or) c3 = c1.operator -();
	 */
	/* Pre-Post Increment....
	 * c3 = ++c1;
	 * c3 = c1++;
	 */
	cout << "Now your final structure data: " << endl;
	c2.showData();
}
