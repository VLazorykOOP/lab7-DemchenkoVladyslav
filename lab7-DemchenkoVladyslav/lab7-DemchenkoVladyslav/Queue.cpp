#pragma once
#include <vcruntime_exception.h>
#include<vcruntime.h>
#include "Queue.h"
template<typename T>
T& Queue<T>::operator[](int index) {
	if (index >= 0 && index < size)
		return array[index];
	else throw std::exception("out of range");
}