/*
4. Пользователь вводит с клавиатуры количество студентов, сдавших
экзамен, и количество «должников». Посчитать, сколько процентов
составляют «должники» от общего числа студентов, а также, сколько
процентов составляют студенты, сдавшие экзамен.
*/

#include<iostream>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //працює тільки з потоком виведення
	SetConsoleCP(1251); //встановлює потрібну кодову таблицю, на потік введення
	SetConsoleOutputCP(1251); //встановлює потрібну кодову таблицю, на потік виводу

	cout << "Введите кол-во студентов сдавших экзамен: " << endl;
	int passed_the_exam{ 0 };
	cin >> passed_the_exam;

	cout << "Введите кол-во \"должников\": " << endl;
	int failed_the_exam{ 0 };
	cin >> failed_the_exam;

	double total_number_of_students = passed_the_exam + failed_the_exam;

	double percent_passed_the_exam = passed_the_exam / total_number_of_students * 100;
	double percent_failed_the_exam = failed_the_exam / total_number_of_students * 100;

	cout << "Процент сдавших экзамен: " << percent_passed_the_exam
		<< "\nПроцент должников: " << percent_failed_the_exam << endl;

	return 0;
}
