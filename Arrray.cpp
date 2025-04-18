// Arrray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void arrayfun(int x[3]) {
	cout << " pls enter your numder 1" << endl;
	cin >> x[0];

	cout << " pls enter your numder 1" << endl;
	cin >> x[1];


	cout << " pls enter your numder 1" << endl;
	cin >> x[2];
}
void readfun(int x[3]) {
	int x1 =( x[0] + x[1] + x[2])/3;
	

}
void printary(int x[3]) {
	//readfun(x);
	//int x1;
	int x1 = (x[0] + x[1] + x[2]) / 3;
	cout << "number 1 =" << x[0] << endl;
	cout << "number 2 =" << x[1] <<endl;
	cout << "number 3 =" << x[2] << endl;
	cout << "number x =" << x1 << endl;
}
int main()
{
	int x[3];
	arrayfun(x);
	readfun(x);
	printary(x);


}
