#include <iostream>
using namespace std;

int sum(int num1, int num2) {
	return num1 + num2;
}

template <typename T> T newSum(T num1, T num2) {
	return num1 + num2;
}

template <typename T> void showArray(T array[], int length) {
	cout << "[";
	for (int i = 0; i < length; i++)
		cout << array[i] << ", ";
		cout << "\b\b]\n";
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	int a1[5] = { 1,5,2,8,10 };
	double a2[4] = { 1.2,1.3,1.4,1.5 };
	cout << "Массив int:\n";
	showArray(a1, 5);
	cout << "Массив double:\n";
	showArray(a2, 4);
	cout << "Конец!";


	//Вызов шаблонной функции
	/*cout << newSum(10, 6) << endl; // T = INT 
	cout << newSum(1.5, 2.4) << endl; // T = DOUBLE
	cout << newSum(true, false) << endl; // T= BOOL
	short a = 5, b = 7;
	cout << newSum(a, b) << endl; // T = SHORT*/



	// Задача 

	return 0;
}