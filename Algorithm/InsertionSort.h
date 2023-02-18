#pragma once
#include "Tools.h"

template <typename T>
void insertionSort(std::vector<T>& arr, bool reverse = false)
{
	if (arr.size() < 2)
		return;
	
	for (int i = 1; i < arr.size(); i++)
	{
		if (reverse)
		{
			for (int j = i - 1; j >= 0 && arr[j] < arr[j + 1]; j--)
				Swap(arr, j, j + 1);
		}
		else 
		{
			for (int j = i - 1; j >= 0 && arr[j] > arr[j + 1]; j--)
				Swap(arr, j, j + 1);
		}
	}
}

void comparator(std::vector<int>& arr, bool reverse = false)
{
	reverse ?
		std::sort(arr.begin(), arr.end(), std::greater<int>()) :
		std::sort(arr.begin(), arr.end(), std::less<int>());
}