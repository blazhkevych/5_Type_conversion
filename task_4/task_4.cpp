/*
4. ������������ ������ � ���������� ���������� ���������, �������
�������, � ���������� ����������. ���������, ������� ���������
���������� ��������� �� ������ ����� ���������, � �����, �������
��������� ���������� ��������, ������� �������.
*/

#include<iostream>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //������ ����� � ������� ���������
	SetConsoleCP(1251); //���������� ������� ������ �������, �� ���� ��������
	SetConsoleOutputCP(1251); //���������� ������� ������ �������, �� ���� ������

	cout << "������� ���-�� ��������� ������� �������: " << endl;
	int passed_the_exam{ 0 };
	cin >> passed_the_exam;

	cout << "������� ���-�� \"���������\": " << endl;
	int failed_the_exam{ 0 };
	cin >> failed_the_exam;

	double total_number_of_students = passed_the_exam + failed_the_exam;

	double percent_passed_the_exam = passed_the_exam / total_number_of_students * 100;
	double percent_failed_the_exam = failed_the_exam / total_number_of_students * 100;

	cout << "������� ������� �������: " << percent_passed_the_exam
		<< "\n������� ���������: " << percent_failed_the_exam << endl;

	return 0;
}
