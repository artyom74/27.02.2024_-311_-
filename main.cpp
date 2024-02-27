// 2. Написать функцию, которая получает на вход стороны прямоугольника, а возвращает периметр.Вызвать функцию в main, результат вывести тоже в main

#include <iostream>
#include <string>
using namespace std;

int area(int side1, int side2) {

	int result = (side1 + side1) + (side2 + side2);
	return result;
}


int main() {
	setlocale(LC_ALL, "ru");

	int length;
	cout << "Программа 'подсчёт периметра'" << endl << "Введите длину первой стороны: ";
	cin >> length;

	int weight;
	cout << "Введите длину другой стороны: ";
	cin >> weight;

	
	cout << "Периметр вашего прямоугольника: " << area(length, weight);
	return 0;
} 