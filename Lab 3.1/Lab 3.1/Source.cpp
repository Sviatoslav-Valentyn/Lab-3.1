// Lab_03_1.cpp
// ������� ��������� - �������� ����������
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ���� �����.
// ������ 0.1

#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� - ������������� ����� ������� ������
	double B; // �������� ��������� - ������������� ����� ������� ������
	std::cout << "������ �������� ����� �����(x): "; std::cin >> x;

	A = 5 * exp(3 * x);
	// ����� 1: ������������ � ��������� ����
	if (x <= -1)
		B = 3 + sin(abs(x));
	if (-1 < x && x <= 3)
		B = 2 * exp((x / 4.0) - 1);
	if (x > 3)
		B = cos((7 - sqrt(2)) * pow(x, 3));
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// ����� 2: ������������ � ����� ����
	if (x <= -1)
		B = 3 + sin(abs(x));
	else
		if (x > 3)
			B = cos((7 - sqrt(2)) * pow(x, 3));
		else
			B = 2 * exp((x / 4.0) - 1);
	y = A + B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}