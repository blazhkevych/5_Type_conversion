/*
5. ������������ ������ � ���������� ����� � �������, ���� ������ �
������� � ���������� ������ �� ���. ���������, ������� ����� ����� �
������������.
*/

#include<iostream>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //�������� ������ � ������� ������
	SetConsoleCP(1251); //������������� ������ ������� �������, �� ����� �����
	SetConsoleOutputCP(1251); //������������� ������ ������� �������, �� ����� ������

	cout << "������� ����� � �������: " << endl;
	double amount_in_hryvnia{ 0.0 }; //����� � �������
	cin >> amount_in_hryvnia;

	cout << "������� ���� ������ � �������: " << endl;
	int term_of_deposit_in_months{ 0 }; //���� ������ � �������
	cin >> term_of_deposit_in_months;

	cout << "������� ���������� ������ �� ���: " << endl;
	double interest_rate_for_the_year{ 0.0 }; //���������� ������ �� 1 ���
	cin >> interest_rate_for_the_year;

	double monthly_interest_rate = interest_rate_for_the_year / 12; //���������� ������ �� 1 �����

	double month_1_income = amount_in_hryvnia / 100 * monthly_interest_rate; //����� �� 1 �����
	//cout << "����� �� 1 �. ��������: " << month_1_income << " ���." << endl;

	double all_income = int((((amount_in_hryvnia / 100 * monthly_interest_rate) * term_of_deposit_in_months) + 0.005) * 100); //����� �� ���� ������
	cout << "����� �� " << term_of_deposit_in_months << " �. ��������: " << all_income / 100 << " ���." << endl;

	return 0;
}
