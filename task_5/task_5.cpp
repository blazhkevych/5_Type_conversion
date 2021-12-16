/*
5. ѕользователь вводит с клавиатуры сумму в гривнах, срок вклада в
мес€цах и процентную ставку за год. ѕосчитать, сколько денег будет у
пользовател€.
*/

#include<iostream>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //работает только с потоком вывода
	SetConsoleCP(1251); //устанавливает нужную кодовую таблицу, на поток ввода
	SetConsoleOutputCP(1251); //устанавливает нужную кодовую таблицу, на поток вывода

	cout << "¬ведите сумму в гривнах: " << endl;
	double amount_in_hryvnia{ 0.0 }; //сумма в гривнах
	cin >> amount_in_hryvnia;

	cout << "¬ведите срок вклада в мес€цах: " << endl;
	int term_of_deposit_in_months{ 0 }; //срок вклада в мес€цах
	cin >> term_of_deposit_in_months;

	cout << "¬ведите процентную ставку за год: " << endl;
	double interest_rate_for_the_year{ 0.0 }; //процентна€ ставка за 1 год
	cin >> interest_rate_for_the_year;

	double monthly_interest_rate = interest_rate_for_the_year / 12; //процентна€ ставка за 1 мес€ц

	double month_1_income = amount_in_hryvnia / 100 * monthly_interest_rate; //доход за 1 мес€ц
	//cout << "ƒоход за 1 м. составил: " << month_1_income << " грн." << endl;

	double all_income = int((((amount_in_hryvnia / 100 * monthly_interest_rate) * term_of_deposit_in_months) + 0.005) * 100); //доход за весь период
	cout << "ƒоход за " << term_of_deposit_in_months << " м. составил: " << all_income / 100 << " грн." << endl;

	return 0;
}
