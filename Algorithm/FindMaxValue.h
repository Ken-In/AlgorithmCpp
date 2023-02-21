#pragma once
#include "Tools.h"

int process(std::vector<int>& arr, int L, int R)
{
	if (L == R)
		return arr[L];

	int mid = L + ((R - L) >> 1);
	int leftMax = process(arr, L, mid);
	int rightMax = process(arr, mid + 1, R);

	return std::max(leftMax, rightMax);
}