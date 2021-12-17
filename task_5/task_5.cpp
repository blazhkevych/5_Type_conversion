/*
5. Пользователь вводит с клавиатуры сумму в гривнах, срок вклада в
месяцах и процентную ставку за год. Посчитать, сколько денег будет у
пользователя.
*/

#include<iostream>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //работает только с потоком вывода	

	cout << "Введите сумму в гривнах: " << endl;
	double amount_in_hryvnia{ 0.0 }; //сумма в гривнах
	cin >> amount_in_hryvnia;

	cout << "Введите срок вклада в месяцах: " << endl;
	int term_of_deposit_in_months{ 0 }; //срок вклада в месяцах
	cin >> term_of_deposit_in_months;

	cout << "Введите процентную ставку за год: " << endl;
	double interest_rate_for_the_year{ 0.0 }; //процентная ставка за 1 год
	cin >> interest_rate_for_the_year;

	double monthly_interest_rate = interest_rate_for_the_year / 12; //процентная ставка за 1 месяц

	double month_1_income = amount_in_hryvnia / 100 * monthly_interest_rate; //доход за 1 месяц
	//cout << "Доход за 1 м. составил: " << month_1_income << " грн." << endl;

	double all_income = int((((amount_in_hryvnia / 100 * monthly_interest_rate) * term_of_deposit_in_months) + 0.005) * 100); //доход за весь период
	cout << "Доход за " << term_of_deposit_in_months << " м. составил: " << all_income / 100 << " грн." << endl;

	return 0;
}
