#pragma once

#include "Tools.h"

//һ�����������г��������Σ�����������������ż���Σ��ҵ������
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
		ab ^= i;//�õ�a^b

	int rightOne = ab & (~ab + 1);//�õ����Ҳ��1 ���1��Ȼ����a��b

	int aorb = 0;
	for (auto i : arr)
	{
		if ( (i & rightOne) == 0 )
			aorb ^= i;
	}

	return { aorb , ab ^ aorb };
}

