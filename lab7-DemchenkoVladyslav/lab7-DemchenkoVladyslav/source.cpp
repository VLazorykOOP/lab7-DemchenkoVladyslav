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
	cout << "����i�� ����i� ������:" << endl;
	cin >> s;
	s = max(abs(s), 1);
	cout << "����i�� " << s << " �������i� ������ : " << endl;
	double* mas = new double[s];
	for (int i = 0; i < s; i++)
	{
		cin >> mas[i];
	}
	cout << "��� �����:" << endl;
	for (int i = 0; i < s; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl;
	SwapMinMax(mas, s);
	cout << "��� ����� �i��� ����, �� ������������ �� �i�i������� �������� ���i���� �i�����:" << endl;
	for (int i = 0; i < s; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl;
	cout << "����i�� �����:" << endl;
	char* str = new char[30];
	cin >> str;
	SwapMinMax(str, strlen(str));
	cout << "��������� ������ �������� �����i� ��� ���� char*:" << endl;
	cout << str << endl;
}
void Task2()
{
	int s;
	cout << "����i�� ����i� ������:" << endl;
	cin >> s;
	s = max(abs(s), 1);
	cout << "����i�� " << s << " �������i� ������ : " << endl;
	double* mas = new double[s];
	for (int i = 0; i < s; i++)
	{
		cin >> mas[i];
	}
	cout << "��� �����:" << endl;
	for (int i = 0; i < s; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl;
	SortArray(mas, s);
	cout << "��� ����� �i��� ����������:" << endl;
	for (int i = 0; i < s; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl;
	cout << "����i�� �����:" << endl;
	char* str = new char[30];
	cin >> str;
	SortArray(str, strlen(str));
	cout << "��������� ������ �������� �����i� ��� ���� char*:" << endl;
	cout << str << endl;
}
void Task3()
{
	Queue<double> q = Queue<double>();
	cout << "��i���� �������i� �� ������ ������ �� �����?" << endl;
	int s;
	cin >> s;
	double d;
	cout << "����i�� " << s << " �������i� �����" << endl;
	for (int i = 0; i < s; i++)
	{
		cin >> d;
		q.Add(d);
	}
	cout << endl << "���� �����: " << endl;
	for (int i = 0; i < q.getSize(); i++)
	{
		cout << q[i] << " ";
	}
	cout << endl;
	cout << endl << "����� Pop ��������� 2 ����: " << endl;
	q.Pop();
	q.Pop();
	for (int i = 0; i < q.getSize(); i++)
	{
		cout << q[i] << " ";
	}
	cout << endl << endl;
}
void Task4()
{
	List<double> l;
	cout << "��i���� �������i� �� ������ ������ �� ������?" << endl;
	int s;
	double d;
	cin >> s;
	cout << "����i�� " << s << " �������i� ������" << endl;
	for (int i = 0; i < s; i++)
	{
		cin >> d;
		l.push(d);
	}
	cout << endl << "��� ������: " << endl;
	for (int i = 0; i < l.length(); i++)
	{
		cout << l[i] << " ";
	}
	cout << endl << endl;
	cout << "����������� ������ ���" << endl;
	l.pop();
	cout << "��������� �� ��������� i�������� (�� ��������� ��������� * i ->):" << endl << endl;
	for (List<double>::Iterator i = l.begin(); i != nullptr; i++)
	{
		cout << *i << " " << i->value << endl;
	}
}
int main()
{
	setlocale(LC_ALL, "ukr");
	int f = 1;
	while (f >= 1 && f <= 4)
	{
		system("cls");
		cout << "����i�� ��������: " << endl;
		cout << "1 - ���i�� ����������� �� �i�i�������� �������i� � �������i� �����i�" << endl;
		cout << "2 - �������� ����������: " << endl;
		cout << "3 - ����-�����: " << endl;
		cout << "4 - ����-������ � i���������: " << endl;
		cout << " - ���i�" << endl;
		cin >> f;
		switch (f)
		{
		case 1:Task1(); break;
		case 2:Task2(); break;
		case 3:Task3(); break;
		case 4:Task4(); break;
		default:
			break;
		}
		system("pause");
	}
	return 0;
}