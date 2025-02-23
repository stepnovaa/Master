#include <iostream>
#include "ArrayProccesor.h"

using namespace std;

int main() {
	int numbers[] = { 5, 12, -3, 7, 0, 19, -8 };

	int size = sizeof(numbers) / sizeof(numbers[0]);

	cout << "Input elements:";

	for (int i = 0; i < size; i++) {
		cin >> numbers[i];
	}
	// Создание объекта класса ArrayProcessor
	ArrayProccesor processor(numbers, size);
	cout << "Array: ";
	for (int i = 0; i < size; i++) {
		cout << numbers[i] << " ";
	}
	cout << endl;
	// Вывод результатов

	cout << "Min: " << processor.getMin() << endl;
	cout << "Max: " << processor.getMax() << endl;
	cout << "Arithmetic_mean: " << processor.getArithmetic_mean() << endl;
}
