#pragma once
#include <iostream>
#include "Queue.cpp"
#include "List.h"

using namespace std;


template <typename T>
void SwapMinMax(T* a, int s)
{
	if (a == NULL)return;
	int maxIn = 0;
	int minIn = 0;
	T curMax = a[0];
	T curMin = a[0];
	for (int i = 1; i < s; i++)
	{
		if (curMax < a[i])
		{
			curMax = a[i];
			maxIn = i;
		}
		if (curMin > a[i])
		{
			curMin = a[i];
			minIn = i;
		}
	}
	T c = a[minIn];
	a[minIn] = a[maxIn];
	a[maxIn] = c;
}
template<>
void SwapMinMax(char* a, int s)
{
	if (a == NULL)return;
	int maxIn = 0;
	int minIn = 0;
	char curMax = a[0];
	char curMin = a[0];
	for (int i = 1; i < s; i++)
	{
		if (curMax < a[i])
		{
			curMax = a[i];
			maxIn = i;
		}
		if (curMin > a[i])
		{
			curMin = a[i];
			minIn = i;
		}
	}
	char c = a[minIn];
	a[minIn] = a[maxIn];
	a[maxIn] = c;
}
template <typename T>
void SortArray(T* a, int s)
{
	for (int i = 1; i < s; i++)
	{
		for (int j = i; j > 0; j--)
		{
			if (a[j] < a[j - 1])
				swap(a[j], a[j - 1]);
		}
	}
}
template <>
void SortArray(char* a, int s)
{
	for (int i = 1; i < s; i++)
	{
		for (int j = i; j > 0; j--)
		{
			if (a[j] < a[j - 1])
				swap(a[j], a[j - 1]);
		}
	}
}
void Task1()
{
	int s;
	cout << "Введіть розмір масиву:" << endl;
	cin >> s;
	s = max(abs(s), 1);
	cout << "Введіть " << s << " елементів масиву : " << endl;
	double* mas = new double[s];
	for (int i = 0; i < s; i++)
	{
		cin >> mas[i];
	}
	cout << "Ваш масив:" << endl;
	for (int i = 0; i < s; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl;
	SwapMinMax(mas, s);
	cout << "Ваш масив після того, як максимальний та мінімальний елементи поміняно місцями:" << endl;
	for (int i = 0; i < s; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl;
	cout << "Введіть рядок:" << endl;
	char* str = new char[30];
	cin >> str;
	SwapMinMax(str, strlen(str));
	cout << "Результат роботи шаблонної функції для типу char*:" << endl;
	cout << str << endl;
}
void Task2()
{
	int s;
	cout << "Введіть розмір масиву:" << endl;
	cin >> s;
	s = max(abs(s), 1);
	cout << "Введіть " << s << " елементів масиву : " << endl;
	double* mas = new double[s];
	for (int i = 0; i < s; i++)
	{
		cin >> mas[i];
	}
	cout << "Ваш масив:" << endl;
	for (int i = 0; i < s; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl;
	SortArray(mas, s);
	cout << "Ваш масив після сортування:" << endl;
	for (int i = 0; i < s; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl;
	cout << "Введіть рядок:" << endl;
	char* str = new char[30];
	cin >> str;
	SortArray(str, strlen(str));
	cout << "Результат роботи шаблонної функції для типу char*:" << endl;
	cout << str << endl;
}
void Task3()
{
	Queue<double> q = Queue<double>();

	try
	{
		q.Add(2.5);
		cout << q[0];
		q.Pop();
		cout << q[0];
	}
	catch (exception e)
	{
		cout << e.what();
	}
}
int main()
{
	setlocale(LC_ALL, "ukr");
	List<double> l;
	l.push(2);
	l.push(3);
	l.show();
	cout << endl;
	l.pop();
	cout << endl;
	l.show();
	cout << endl;
	cout << endl;
	l.pop();
	l.show();
	return 0;
}