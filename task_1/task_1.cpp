/*
1. ������������ ������ � ���������� ��������� ������ ��������, ��
���������� � ������� ������. ��������� ����� ����� ������.
*/

#include<iostream>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //������ ����� � ������� ���������
	SetConsoleCP(1251); //���������� ������� ������ �������, �� ���� ��������
	SetConsoleOutputCP(1251); //���������� ������� ������ �������, �� ���� ������

	cout << "������� ��������� 1-�� ��������: " << endl;
	double unit_cost{ 0 };
	cin >> unit_cost; //21789

	cout << "������� ���������� ���������: " << endl;
	double number_of_laptops{ 0 };
	cin >> number_of_laptops; //2

	cout << "������� ������� ������ (�� 1 �� 99): " << endl;
	double discount_percentage{ 0 };
	cin >> discount_percentage; //15

	double total_cost_including_discount
		= (unit_cost * (1 - discount_percentage / 100)) * number_of_laptops;
	//(21789*(1-15/100))*2=21789*0,85*2=37041,3

	cout << "����� ����� ������, �������� ������ � " << discount_percentage << " % ����������: "
		<< total_cost_including_discount << " ���.";

	return 0;
}
