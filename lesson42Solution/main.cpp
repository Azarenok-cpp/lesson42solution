#include "main.h"
#include "util.h"
#include "tests.h"
#include "logic.h"

int main() {
	int matrix[][N]{
		{1,2,3,4,5},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
		{0,0,0,0,0},
	};

	cout << (is_sorted(matrix) ? "yes" : "no")<<endl;
	return 0;
}
