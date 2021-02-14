#include <iostream>
#include <time.h>
#include <stdio.h>

int mat_1[6][6];
int mat_2[6][6];

void init(int mat[][6]);
void output(int mat[][6], int);
int somma(int mat[][6], int size_1, int size_2);
int random();

int main()
{
	srand(time(NULL));
	init(mat_1);
	output(mat_1, 6);
	mat_2[0][0] = somma(mat_1, 3, 3);
	mat_2[0][1] = somma(mat_1, 3, 6);
	mat_2[1][0] = somma(mat_1, 6, 3);
	mat_2[1][1] = somma(mat_1, 6, 6);
	output(mat_2, 2);
}

int random() {
	int num = rand() % 10;

	return num;
}

void init(int mat[][6]) {
	for (int x = 0; x < 6; x++)
	{
		for (int y = 0; y < 6; y++)
			mat[x][y] = random();
	}
}

void output(int mat[][6], int size) {
	for (int x = 0; x < size; x++)
	{
		for (int y = 0; y < size; y++)
			std::cout << mat[x][y] << " | ";
		std::cout << "\n";
	}
}

int somma(int mat[][6], int size_1, int size_2) {
	int sum = 0;

	for (int x = size_1 - 3; x < size_1; x++)
	{
		for (int y = size_2 - 3; y < size_2; y++)
			sum += mat[x][y];
	}
	return sum;
}
