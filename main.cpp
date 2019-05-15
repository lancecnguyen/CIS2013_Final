#include <iostream>
#include <string>

using namespace std;

int main(){
	string name;
	cout << "Final Exam" << endl;
	cout << "What is your name?" << endl;
	getline(cin,name);
	cout << "Ready for the exam " << name << "?" << endl;
	
	return 0;
}
