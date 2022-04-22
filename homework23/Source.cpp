#include <iostream>
using namespace std;

template <typename T> void showArray(T arr[], int length);

template <typename T> void threeMax(T& a, T& b, T& c);

template <typename T> T& Refer(T arr[], int length);

template <typename T> void Arrzero(T arr1[], int length1, T arr2[], int length2);

int main() {
	setlocale(LC_ALL, "Russian");

	
	int n, m, a;
	cout << "Задача 1.\nВведите три числа: ";
	cin >> n >> m >> a;
	threeMax(n, m, a);
	cout << n << " " << m << " " << a << "\n\n";


	cout << "Задача 2.\nИзначальный массив:\n";
	const int L = 5;
	int z2[L] = { 7, -4, 3, -5, 6 };
	showArray(z2, L);
	cout << " Первый отрицательный элемент массива = " << Refer(z2, L) << ".\n\n";

	
	cout << "Задача 3.\nМассив 1:\n";
	const int b = 7;
	const int c = 7;
	int z3[b] = { 2, 3, 6, 1, 7, 4, 5 };
	int z4[c] = { 3, 7, 9, 4, 3, 8, 5 };
	showArray(z3, b);
	cout << "массив 2:\n";
	showArray(z4, c);
	Arrzero(z3, b, z4, c);
	cout << "Массив 2 с обнуленными элементами:\n";
	showArray(z4, c);
	cout << endl;

	return 0;
}

template <typename T> void threeMax(T& a, T& b, T& c) {
	if (a > b && a > c) {
		b = a;
		c = a;
	}
	else if (b > a && b > c) {
		a = b;
		c = b;
	}
	else {
		a = c;
		b = c;
	}
}

template <typename T> T& Refer(T arr[], int length) {
	for (int i = 0; i < length; i++)
		if (arr[i] < 0)
			return arr[i];
	return arr[0];
}

template <typename T> void Arrzero(T arr1[], int length1, T arr2[], int length2) {
	for (int i = 0; i < length1; i++)
		for (int j = 0; j < length2; j++)
			if (*(arr2 + j) == *(arr1 + i))
				*(arr2 + j) = 0;
}

template <typename T> void showArray(T arr[], int length) {
	cout << "[";
	for (int i = 0; i < length; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]\n";
}
