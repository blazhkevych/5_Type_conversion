/*
2. Пользователь вводит с клавиатуры размер одного фильма в гигабайтах
и скорость Интернет-соединения в битах в секунду. Определить, за
какое время (часы, минуты и секунды) скачается фильм.
*/

#include<iostream>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //працює тільки з потоком виведення
	SetConsoleCP(1251); //встановлює потрібну кодову таблицю, на потік введення
	SetConsoleOutputCP(1251); //встановлює потрібну кодову таблицю, на потік виводу

	cout << "Введите размер одного фильма в гигабайтах: " << endl;
	double movie_in_gigabytes = { 0 };
	cin >> movie_in_gigabytes; // 4,5 гб

	cout << "Введите скорость Интернет-соединения в битах в секунду: " << endl;
	int int_con_speed = { 0 };
	cin >> int_con_speed; // 10485760

	long long int movie_in_bits = movie_in_gigabytes * 1024 * 1024 * 1024 * 8;	//4.5*1024*1024*1024*8=38654705664 бит размер фильма

	double whole_time_in_s = movie_in_bits / int_con_speed;	//38654705664/10485760=3686,4 секунды на скачивание

	int download_time_in_h = whole_time_in_s / 3600; // 3686,4/3600=1,024 часов на скачивание фильма

	int download_time_in_m = (whole_time_in_s - (download_time_in_h * 3600)) / 60;  // (3686,4-(1*3600))/60=86,4/60=1,44 минут на скачивание фильма 

	int download_time_in_s = whole_time_in_s - (download_time_in_h * 3600) - (download_time_in_m * 60); // 3686,4-(1*3600)-(1*60)=26,4 секунды на скачивание фильма

	cout << "Фильм скачается за " << download_time_in_h << " ч., " << download_time_in_m << " м., " << download_time_in_s << " с." << endl;

	return 0;
}

/*
1 Байт = 8 бит
1 Килобайт = 1024 Байт = 2^10
1 Мегабайт = 1024 Килобайт = 1024 * 1024 = 1 048 576
1 Гигабайт = 1024 Мегабайт = 1 048 576 Килобайт = 1 048 576 * 1024 = 1 073 741 824
*/