#pragma once

#include "Tools.h"

template<typename T>
void BubbleSort(std::vector<T>& arr, bool reverse = false)
{
	for (int i = 0; i < arr.size(); i++)
	{
		for (int j = 0; j < arr.size() - i - 1; j++)
		{
			if (reverse)
			{
				if(arr[j] < arr[j + 1])
					Swap(arr, j, j + 1);
			}
			else
			{
				if (arr[j] > arr[j + 1])
					Swap(arr, j, j + 1);
			}

		}
	}
}