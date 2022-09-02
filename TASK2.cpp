#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char **argv) {

	string sunio, shizuka;

	ofstream myfile(argv[1]);

	myfile << argv[2];

	myfile.close();

	ifstream myfile2(argv[1]);

	ofstream myfile3(argv[3]);

	if (myfile2.is_open()) {
		while (getline(myfile2, sunio)) {

			myfile3 << sunio;
		}
	}
	myfile2.close();

	myfile3.close();
	ifstream myfile4(argv[3]);

	if (myfile4.is_open()) {
		while (getline(myfile4, shizuka)) {

			cout << shizuka;
		}
	}
	return 0;
}