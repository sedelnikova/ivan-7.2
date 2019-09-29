// ivan 7.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Даны три целых числа: A, B, C. Проверить истинность высказывания: «Справедливо двойное неравенство A < B < C».

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int A, B, C;
	cout << "Введите 3 числа " << endl;
	cin >> A >> B >> C;
	cout << "Высказывание " << ((B > A) && (B < C));

	return 0;
}

