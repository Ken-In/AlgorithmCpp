#include "BubbleSort.h"
#include "OddlyTimesNumber.h"
#include "InsertionSort.h"

int main()
{
	std::vector<int> arr = { 3, 2, 5, 4, 1, 0, 7, 6};

	//ð������ ���Ӷ�O(n2)
	BubbleSort(arr);
	PrintVector(arr);
	BubbleSort(arr, true);
	PrintVector(arr);

	//�����г�������������һ����
	arr = { 1, 1, 2, 2, 2, 2, 3 };
	Print(FindOddNumber(arr));
	//�����г�������������������
	arr = { 6, 1, 1, 2, 2, 2, 2, 3 };
	std::pair<int, int> ans = FindTwoOddNumber(arr);
	std::cout << ans.first << "\t" << ans.second << std::endl;

	//�������� ���Ӷ�O(n2)
	arr = { 3, 2, 5, 4, 1, 0, 7, 6 };
	insertionSort(arr);
	PrintVector(arr);
	insertionSort(arr,true);
	PrintVector(arr);

	//����
	int testTime = 50000;
	int maxSize = 100;
	int maxValue = 100;
	bool succeed = true;
	for (int i = 0; i < testTime; i++)
	{
		std::vector<int> arr1 = generateRandomArray(maxSize, maxValue);
		std::vector<int> arr2 = arr1;

		insertionSort(arr1);
		comparator(arr2);
		if (arr1 != arr2)
		{
			succeed = false;
			break;
		}
	}

	std::cout << (succeed ? "Succeed!" : "Fucking fucked!") << std::endl;

	std::cin.get();
}