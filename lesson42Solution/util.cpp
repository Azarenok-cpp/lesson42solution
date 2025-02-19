#include "main.h"

void init(int matrix[N][N], int a, int b) {
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++) {
			matrix[i][j] = rand() % (b - a + 1) + a;
		}
	}
}
string convert(int matrix[N][N]) {
	string msg = "";
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++) {
			msg += to_string(matrix[i][j]);
			msg += " ";
		}
		cout << "\n";
	}
	return msg;
}