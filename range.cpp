#include<iostream>
using namespace std;

void display(int* s,int* e);

int main(){

	int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	display(arr+1,arr+8);
	return 0;
}



void display(int* s,int* e){
	int * p = s
	cout << p << '\t' << e << p+8 << endl;
	do{
		cout << *p << endl;
		p++;
	}while(p != e);
}

