// 1. �������� �������, ������� �������� �� ���� ������� ��������������, � ���������� �������. ������� ������� � main, ��������� ������� ���� � main

#include <iostream>
#include <string>
using namespace std;

int area(int side1, int side2) {

	int result = (side1 * side2);
	return result;
}


int main() {
	setlocale(LC_ALL, "ru");

	int length;
	cout << "��������� '������� �������'" << endl << "������� ����� ������ �������: ";
	cin >> length;

	int weight;
	cout << "������� ����� ������ �������: ";
	cin >> weight;

	
	cout << "������� ������ �������������� �����: " << area(length, weight);
	return 0;
}