/*
	Programmer: Hanbyul Park
	Purpose: CCC Preparation
	Date: 03 Feb, 2020
	About: 
		
		Horizontal flip(H) : 0,1 change with 2,3 positions
		Verticla flip(V) : 1,3 change with 2,4 positions
		
*/

#include <iostream>
#include <string>

using namespace std;

/*
void hf(int grid[]) {
	//0 - > 2, 1 - > 3
	//3, 4 backup
	int zero = grid[2];
	int first = grid[3];

	grid[0] = grid[2];
	grid[1] = grid[3];

	grid[2] = zero;
	grid[3] = first;
}
*/

int main(void) {
	int grid[4] = { 1, 2, 3, 4 };
	int t0, t1, t2, t3;

	string input;

	cin >> input;
	for (size_t i = 0; i < input.size(); i++) {

		t0 = grid[0];
		t1 = grid[1];
		t2 = grid[2];
		t3 = grid[3];

		if (input[i] == 'H') { // starts counting from zero
			grid[0] = t2;
			grid[1] = t3;
			grid[2] = t0;
			grid[3] = t1;
		}
		else if (input[i] == 'V') {
			grid[0] = t1;
			grid[1] = t0;
			grid[2] = t3;
			grid[3] = t2;
		}
	}
	
	cout
		<< grid[0] << " "
		<< grid[1] << endl
		<< grid[2] << " "
		<< grid[3] << endl;

	return 0;
}

/*
Execution Results

Batch #1 (15/15 points)
Case #1:	AC	[0.016s,	1.62 MB]
Case #2:	AC	[0.017s,	1.61 MB]
Case #3:	AC	[0.019s,	1.62 MB]
Case #4:	AC	[0.017s,	1.62 MB]
Case #5:	AC	[0.015s,	1.67 MB]
Case #6:	AC	[0.016s,	1.62 MB]
Case #7:	AC	[0.016s,	1.62 MB]
Case #8:	AC	[0.029s,	1.61 MB]
Case #9:	AC	[0.019s,	1.67 MB]
Case #10:	AC	[0.018s,	1.68 MB]
Case #11:	AC	[0.017s,	1.62 MB]
Case #12:	AC	[0.016s,	1.68 MB]
Case #13:	AC	[0.015s,	1.62 MB]
Case #14:	AC	[0.088s,	4.88 MB]
Case #15:	AC	[0.095s,	4.88 MB]
Case #16:	AC	[0.075s,	4.92 MB]
Case #17:	AC	[0.065s,	4.84 MB]
Case #18:	AC	[0.097s,	4.88 MB]
Case #19:	AC	[0.093s,	4.88 MB]

Resources: 0.741s, 4.92 MB
Final score: 15/15 (3.0/3 points)
*/


