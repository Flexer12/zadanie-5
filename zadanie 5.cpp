﻿#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
double* Memory(double*ptr,int size) {
	ptr = new double[size];
	return ptr;
}
void Print_f(double* ptr, int size) {
	for (int i = 0; i < size; i++)
	{
		cout << ptr[i]<<" ";
	}
	cout << endl;
}
	void InMasR(double* x, int n) {
		srand(time(0));
		for (int i = 0; i < n; i++) {
			x[i] = rand() % 10 + 1;
		}
      }
	double* freeMemory(double* ptrArr)
	{
		delete[] ptrArr;
		ptrArr = 0;

		return ptrArr;
	}
int main() {
	double* ps = 0;
	char decision = 0;

	do
	{
		int size = 0;
		cout << "Размер массива: ";
		cin >> size;

		ps = Memory(ps, size);
		InMasR(ps, size);
		printf(ps, size);
		ps = freeMemory(ps);

		cout << "\nПродолжить (1). Выйти (0): ";
		cin >> decision;
	} while (decision != '0');
}