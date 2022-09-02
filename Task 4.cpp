#include <iostream>
using namespace std;
int func(int num) {
	if(num<0) {
		exit(0);
	} else {
		int sum=0;
		for(int i=1; i<num; i++) {
			if(num % i == 0) {
				sum+=i;
				cout << i <<" is a factor of " << num << endl;
			}
		}
	return sum;
	}
}
	int main() {
		int num=0;
		cout << "enter a positive integer: ";
		cin >> num;
		int sum=func(num);
		cout << "the sum of factors: " << sum << endl;
	}
