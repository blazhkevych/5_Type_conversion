/*
2. ������������ ������ � ���������� ������ ������ ������ � ����������
� �������� ��������-���������� � ����� � �������. ����������, ��
����� ����� (����, ������ � �������) ��������� �����.
*/

#include<iostream>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //������ ����� � ������� ���������
	SetConsoleCP(1251); //���������� ������� ������ �������, �� ���� ��������
	SetConsoleOutputCP(1251); //���������� ������� ������ �������, �� ���� ������

	cout << "������� ������ ������ ������ � ����������: " << endl;
	double movie_in_gigabytes = { 0 };
	cin >> movie_in_gigabytes; // 4,5 ��

	cout << "������� �������� ��������-���������� � ����� � �������: " << endl;
	int int_con_speed = { 0 };
	cin >> int_con_speed; // 10485760

	long long int movie_in_bits = movie_in_gigabytes * 1024 * 1024 * 1024 * 8;	//4.5*1024*1024*1024*8=38654705664 ��� ������ ������

	double whole_time_in_s = movie_in_bits / int_con_speed;	//38654705664/10485760=3686,4 ������� �� ����������

	int download_time_in_h = whole_time_in_s / 3600; // 3686,4/3600=1,024 ����� �� ���������� ������

	int download_time_in_m = (whole_time_in_s - (download_time_in_h * 3600)) / 60;  // (3686,4-(1*3600))/60=86,4/60=1,44 ����� �� ���������� ������ 

	int download_time_in_s = whole_time_in_s - (download_time_in_h * 3600) - (download_time_in_m * 60); // 3686,4-(1*3600)-(1*60)=26,4 ������� �� ���������� ������

	cout << "����� ��������� �� " << download_time_in_h << " �., " << download_time_in_m << " �., " << download_time_in_s << " �." << endl;

	return 0;
}

/*
1 ���� = 8 ���
1 �������� = 1024 ���� = 2^10
1 �������� = 1024 �������� = 1024 * 1024 = 1 048 576
1 �������� = 1024 �������� = 1 048 576 �������� = 1 048 576 * 1024 = 1 073 741 824
*/