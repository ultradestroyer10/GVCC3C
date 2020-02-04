/*
	Programmer: Hanbyul Park
	Purpose: CCC Preparation Material 
	Limitation: three variables, one loop
*/
using namespace std;

#include <iostream>
#include <string>

int old_n; //old number
int next_n; //next number
int current; //current number

int main() {
	old_n = 0 ; current = 1;


	while (current < 1000) {
		cout << current << endl;
		next_n = current + old_n;
		old_n = current;
		current = next_n;
	}

	return 0;

}
