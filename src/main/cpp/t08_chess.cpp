//Даны числа n и m. Заполните массив размером n × m в шахматном порядке: 
// клетки одного цвета заполнены нулями, 
// а другого цвета - заполнены числами натурального ряда сверху вниз, слева направо. 
// В левом верхнем углу записано число 1.
//Формат входных данных
//        Вводятся два числа n и m, не превышающие 100.
//
//Формат выходных данных
//        Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.
//
//Sample Input:
//
//3 5
//Sample Output:
//
//   1   0   2   0   3
//   0   4   0   5   0
//   6   0   7   0   8

#include "t08_chess.h"
#include <iostream>
#include <iomanip>


using namespace std;

int t08_chess() {
	int n, m, l = 1;
	cin >> n >> m;
	int mas[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if ((i + j) % 2 == 0) 
			{
				mas[i][j] = l;
				l++;
			}
			else if (i + j == 0) {
				mas[i][j] = l;
				l++;
			}
			else if ((i + j) % 2 != 0) mas[i][j] = 0;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(4) << mas[i][j];
		}

	}

	return 0;



	int n, m;
	cin >> n >> m;
	int mas[n][m];
	int h = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] = 0;
		}
	}
	int i = 0, j = 0;
	while (m * n > h) {
		while (mas[i][(j + 1) % m] == 0) {
			mas[i][j] = h;
			h++;
			j++;
		}
		while (mas[(i - 1) % n][j] == 0) {
			mas[i][j] = h;
			h++;
			i--;
		}
		while (mas[i][(j - 1) % m] == 0) {
			mas[i][j] = h;
			h++;
			j--;
		}
		while (mas[(i + 1) % n][j] == 0) {
			mas[i][j] = h;
			h++;
			i++;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << mas[i][j] << " ";
		}
	}
	return 0;
}
