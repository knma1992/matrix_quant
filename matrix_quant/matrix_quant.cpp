#include "matrix.h"
#include <iostream>
#include <algorithm> 
#include <iostream> 

using namespace std;

int main() {
	int num_rows, num_cols, n=0;
	int m1, m2;
	char d = '0';
	cout << "Amount of desired rows:";
	cin >> num_rows;
	cout << "\n Amount of desired colummns:";
	cin >> num_cols;

	QSMatrix<char> mat4(num_rows, num_cols, d);
	mat4.print();

	return 0;
}