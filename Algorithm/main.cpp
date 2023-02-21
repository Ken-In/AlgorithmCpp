#include "FindMaxValue.h"
#include "QuickSort.h"
using namespace std;

int main()
{
	vector<int> nums = { 2, 4, 1, 6, 9, 4, 2, 6, 3, 5, 2, 434, 34};
	QuickSort(nums, 0, nums.size() - 1);
	
	PrintVector(nums);
	cin.get();
}