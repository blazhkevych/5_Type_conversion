/*
3. ������������ ������ � ���������� ������� �����. ��������� ��� ��
���� ������ ����� ������� � ������� �� �����.

123.45678 = 123.46
123.45432 = 123.45
*/

#include<iostream>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //������ ����� � ������� ���������
	SetConsoleCP(1251); //���������� ������� ������ �������, �� ���� ��������
	SetConsoleOutputCP(1251); //���������� ������� ������ �������, �� ���� ������

	cout << "������� ������� �����: " << endl;
	double fractional_number{ 0.0 };
	cin >> fractional_number;

	double fractional_number2 = (int)((fractional_number + 0.005) * 100);

	cout << "������� ����� ����� ���������� �� ���� ������ ����� �������: " << fractional_number2 / 100 << endl;

	return 0;
}
