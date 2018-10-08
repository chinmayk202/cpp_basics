#include<iostream>
#include<string.h>
using namespace std;

class Student{
		int age;
		float average;
		string name;

	public:
		Student(int a,float avg, string n){
			age = a;
			average = avg;
			name = n;
		}
		
		void print_data(){
			cout << "Age : " << age << endl << 
				"Name : " << name << endl<<
				"Average : " << average << endl;
		}

};

int main(){
	Student Chinmay(19,99.99,"Chinmay");
	Student Mohit(18,90.5,"Mohit");;
	Chinmay.print_data();
	Mohit.print_data();
	return 0;
}
