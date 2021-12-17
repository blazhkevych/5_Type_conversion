/*
3. Пользователь вводит с клавиатуры дробное число. Округлить его до
двух знаков после запятой и вывести на экран.

123.45678 = 123.46
123.45432 = 123.45
*/

#include<iostream>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //працює тільки з потоком виведення
	SetConsoleCP(1251); //встановлює потрібну кодову таблицю, на потік введення
	SetConsoleOutputCP(1251); //встановлює потрібну кодову таблицю, на потік виводу

	cout << "Введите дробное число: " << endl;
	double fractional_number{ 0.0 };
	cin >> fractional_number;

	double fractional_number2 = (int)((fractional_number + 0.005) * 100);

	cout << "Дробное число после округления до двух знаков после запятой: " << fractional_number2 / 100 << endl;

	return 0;
}
