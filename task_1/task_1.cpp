/*
1. Пользователь вводит с клавиатуры стоимость одного ноутбука, их
количество и процент скидки. Посчитать общую сумму заказа.
*/

#include<iostream>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //працює тільки з потоком виведення
	SetConsoleCP(1251); //встановлює потрібну кодову таблицю, на потік введення
	SetConsoleOutputCP(1251); //встановлює потрібну кодову таблицю, на потік виводу

	cout << "Введите стоимость 1-го ноутбука: " << endl;
	double unit_cost{ 0 };
	cin >> unit_cost; //21789

	cout << "Введите количество ноутбуков: " << endl;
	double number_of_laptops{ 0 };
	cin >> number_of_laptops; //2

	cout << "Введите процент скидки (от 1 до 99): " << endl;
	double discount_percentage{ 0 };
	cin >> discount_percentage; //15

	double total_cost_including_discount
		= (unit_cost * (1 - discount_percentage / 100)) * number_of_laptops;
	//(21789*(1-15/100))*2=21789*0,85*2=37041,3

	cout << "Общая сумма заказа, учитывая скидку в " << discount_percentage << " % составляет: "
		<< total_cost_including_discount << " грн.";

	return 0;
}
