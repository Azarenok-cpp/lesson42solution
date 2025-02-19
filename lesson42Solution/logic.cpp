#include "logic.h"
#include "main.h"

string has_zero_elements(int matrix[N][N]) {
	string result = "";

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++) {
			if (matrix[i][j] == 0) {
				result += to_string(i + 1) + " ";
				break;
			}
		}
	}
	return result;
}

void bubble_sort(int* array, int length) {
	for (int j = 0; j < length; j++)
	{
		bool flag = true;

		for (int i = 0; i < length - 1 - j; i++) {

			if (array[i] > array[i + 1]) {
				swap(array[i], array[i + 1]);
				flag = false;
			}


		}
		if (flag) {
			break;
		}
	}
}

bool is_sorted(int matrix[N][N]) {

	for (int i = 0; i < N; i++)
	{
			for (int j = 0; j < N - 1 - i; j++) {

				if (matrix[i][j] > matrix[i][j + 1]) {
					return true;
				}


			}
			for (int j = 0; j < N - 1 - i; i++) {

				if (matrix[i][j] < matrix[i][j + 1]) {
					return true;
				}


			}
		
	}
	return false;
}