#include <iostream>
#include <string>
#include "ArrayProccesor.h"
#define MAX 10
using namespace std;

struct Book {
	string title;
	string author;
	int year;
};
void sortBooks(Book books[],int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-1-i; j++) {
			if (books[j].year > books[j + 1].year) {
				swap(books[j], books[j + 1]);
			}
		}
	}
}
int main() {
	setlocale(LC_ALL, "RU");
	/* int numbers[] = {5, 12, -3, 7, 0, 19, -8};

	int size = sizeof(numbers) / sizeof(numbers[0]);

	cout << "Input elements:";

	for (int i = 0; i < size; i++) {
		cin >> numbers[i];
	}
	// �������� ������� ������ ArrayProcessor
	ArrayProccesor processor(numbers, size);
	cout << "Array: ";
	for (int i = 0; i < size; i++) {
		cout << numbers[i] << " ";
	}
	cout << endl;
	// ����� �����������

	cout << "Min: " << processor.getMin() << endl;
	cout << "Max: " << processor.getMax() << endl;
	cout << "Arithmetic_mean: " << processor.getArithmetic_mean() << endl;
	*/
	
	Book books[MAX];
	int n;
	cin >> n;
	cin.ignore();
	if (n > MAX) {
		cout << "���������� ������������ ���������� ����("<<MAX<<") !!!"<<endl;
		return 1;
	}
	for (int i = 0; i < n; i++) {
		cout << "������� �������� ����� : ";
		getline(cin, books[i].title);
		cout << "������� ������ ����� : ";
		getline(cin, books[i].author);
		cout << "������� ��� ������� ����� : ";
		cin >> books[i].year;
		cin.ignore();
	}
	sortBooks(books, n);
	cout << "\n���������� ���� �� ���� �������: \n ";
	for (int i = 0; i < n; i++) {
		cout << books[i].year << " " << books[i].author << " " << books[i].title<<endl;
	}
	cout << "hello";
}



