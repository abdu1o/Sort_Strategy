#pragma once
class SortedArray
{
	int size = 10;
	int* arr = new int[size] {23, 1, 0, 5, 45, 12, 7, -1, 10, 2};
	SortStrategy* sortstrategy;

public:

	void SetSortStrategy(SortStrategy* sortstrategy)
	{
		this->sortstrategy = sortstrategy;
	}

	void Sort()
	{
		sortstrategy->Sort(arr, size);
		for (int i = 0; i < size; i++)
		{
			std::cout << arr[i] << " ";
		}
		std::cout << std::endl;
	}

};
