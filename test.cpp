#include<iostream>
using namespace std;

int main(){
	int x = 3;
	int &y = x;
	cout << y << "\t" << &y << "\t" << &x << endl;
	int a = 5;
	int &b = a;

	return 0;
}
