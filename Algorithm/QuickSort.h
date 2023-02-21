#pragma once
#include "Tools.h"

void QuickSort(std::vector<int>& nums, int lo, int hi)
{
	if (lo >= hi) return;

	int i = lo, j = hi + 1;
	int cmp = nums[lo];
	while (true)
	{
		while (nums[++i] < cmp)
		{
			if(i == hi)
				break;
		}

		while (nums[--j] > cmp)
		{
			if(j == lo)
				break;
		}

		if(i >= j)
			break;

		Swap(nums, i, j);
	}

	Swap(nums, j, lo);
	QuickSort(nums, lo, j - 1);
	QuickSort(nums, j + 1, hi);
}