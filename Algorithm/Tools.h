#pragma once

#include <vector>
#include <map>
#include <unordered_map>

#include <iostream>
#include <ctime>
#include <algorithm>

#define N 99

void Swap(std::vector<int>& arr, int index1, int index2)//两数不能相等
{
	if (arr[index1] == arr[index2]) return;
	arr[index1] = arr[index1] ^ arr[index2];// 1 = 1 ^ 2 ,			2 = 2
	arr[index2] = arr[index1] ^ arr[index2];// 1 = 1 ^ 2 ,			2 = 2 ^ 1 ^ 2 = 1
	arr[index1] = arr[index1] ^ arr[index2];// 1 = 1 ^ 2 ^ 1 = 2 ,	2 = 1
}

template<typename T>
void Swap(std::vector<T>& arr, int index1, int index2)
{
	T temp = arr[index1];
	arr[index1] = arr[index2];
	arr[index2] = temp;
}



template<typename T>
void PrintVector(std::vector<T>& arr)
{
	for (auto i : arr)
		std::cout << i << " ";
	std::cout << std::endl;
}

template<typename T>
void Print(T value)
{
	std::cout << value << std::endl;
}



float getRandom()
{
	float rd = rand() % (N + 1) / (float)(N + 1);
	return rd;
}

std::vector<int> generateRandomArray(int maxSize, int maxValue)
{
	

	std::vector<int> arr((maxSize + 1) * getRandom());
	for (auto& i : arr)
	{
		i = (int)((maxValue + 1) * getRandom()) - (int)(maxValue * getRandom());
	}
	return arr;
}


