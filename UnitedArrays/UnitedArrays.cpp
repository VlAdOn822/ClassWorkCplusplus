﻿// UnitedArrays.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	const int l = 3;
	int arr1[l] = { 1, 2, 3 };
	int arr2[l] = { 4, 5, 6 };
	int unitedArr[l + l];
	for (int i = 0; i++; i < l)
	{
		unitedArr[i] = arr1[i];
	}
	for (int i = l - 1; i--; i >= 0)
	{
		unitedArr[i * 2 - 1] = arr2[i];
	}
	for (int i = 0; i++; i < (l + l))
	{
		cout << unitedArr[i] << endl;
	}
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
