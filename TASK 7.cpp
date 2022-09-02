#include <iostream>
using namespace std;
class car {
		string color;
		int model;
		int *p;
	public:
		car(string c, int m) {
			color= c;
			p= new int;
			model =m;
		}
		void setc(string c) {
			color = c;
		}
		void setm(int m) {
			model = m;
		}
		void setp(int p1) {
			*p = p1;
		}
		void print() {

			cout << color << endl;
			cout << model << endl;
			cout << *p << endl;
		}
		car( car &c1) { //copy constructor
			p = new int;
			color=c1.color;
			model= c1.model;
			*p = *(c1.p);

		}
		~car() { // destructor
			delete p;
		}
};
int main() {
	car c1("red", 1234);
	car c2(c1); // copy constructor
	car c3 = c2; // assignment operator
	c3.setc("blue");
	c3.print();
	c2.setc("white");
	c2.print();// at first it will print garbage value for pointer p
	c1.setc("green");
	c1.print();// at first it will print garbage value for pointer p
	c1.setp(5);
	c2.setp(7);
	c3.setp(9);
	c1.print();
	c2.print();
	c3.print();
}