#include "logic.h"
#include "main.h"
string has_zero_elements(int matrix[N][N]) {
	string result = "";

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++) {
			if (matrix[i][j] == 0) {
				result += to_string(matrix[i][j]) + " ";
			}
		}
	}
	return result;
}