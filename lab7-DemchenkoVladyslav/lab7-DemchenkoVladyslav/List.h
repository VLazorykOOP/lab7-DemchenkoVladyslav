#pragma once
#include <iostream>
using namespace std;
template<typename T>
struct El
{
public:
	El* prev = nullptr;
	El* next = nullptr;
	T value;
};
template<typename T>
class List
{
	//
	El<T>* head = nullptr;
public:
	void push(T value)
	{
		if (head == nullptr)
		{
			head = new El<T>();
			head->value = value;
			return;
		}
		El<T>* el = new El<T>();
		el->value = value;
		El<T>* temp = head;
		while (temp->next != nullptr)
		{
			temp = temp->next;
		}
		temp->next = el;
		el->prev = temp;
	}
	T pop()
	{
		if (head == nullptr)return NULL;
		if (head->next == nullptr)
		{
			T t = head->value;
			head = nullptr;
			return t;
		}
		El<T>* temp = head;
		while (temp->next->next != nullptr)
		{
			temp = temp->next;
		}
		T t = temp->next->value;
		temp->next = nullptr;
		return t;
	}
	void show()
	{
		if (head == nullptr)
			return;
		El<T>* temp = head;
		while (temp != nullptr)
		{
			cout << temp->value << " ";
			temp = temp->next;
		}
	}
}; ;
