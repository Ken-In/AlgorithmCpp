#pragma once

#include "Tools.h"

//一个数在数组中出现奇数次，数组中其他数出现偶数次，找到这个数
int FindOddNumber(std::vector<int>& arr)
{
	int num = 0;
	for (auto i : arr)
	{
		num ^= i;
	}


	return num;
}

std::pair<int, int> FindTwoOddNumber(std::vector<int>& arr)
{
	int ab = 0;
	for (auto i : arr)
		ab ^= i;//得到a^b

	int rightOne = ab & (~ab + 1);//得到最右侧的1 这个1必然属于a或b

	int aorb = 0;
	for (auto i : arr)
	{
		if ( (i & rightOne) == 0 )
			aorb ^= i;
	}

	return { aorb , ab ^ aorb };
}

