#include "main.h"
#include "logic.h"

void print(string expected, int matrix[N][N]) {
	string actual = has_zero_elements(matrix);

	string msg = expected == actual ? "PASS (green) " : "FAIL (red)";

	cout << msg << endl;
	cout << "------------------------------------------------------\n" << endl;
}
void test01(){
	int matrix[][N]{
		{1,2,3,4,5},
		{2,3,4,5,6},
		{3,4,5,6,7},
		{4,5,6,7,8},
		{5,6,7,8,9},
	};

	string expected = "";
	print(expected, matrix);
}

void test02() {
	int matrix[][N]{
		{1,2,3,4,5},
		{2,3,0,5,6},
		{3,4,5,6,7},
		{4,5,6,7,0},
		{5,6,7,8,9},
	};

	string expected = "2 4 ";
	print(expected, matrix);
}

void test03() {
	int matrix[][N]{
		{1,2,0,4,5},
		{2,0,4,5,6},
		{3,4,5,6,0},
		{4,0,6,7,8},
		{0,6,7,8,9},
	};

	string expected = "1 2 3 4 5 ";
	print(expected, matrix);

}