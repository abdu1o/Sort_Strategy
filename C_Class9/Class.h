#pragma once
class SortStrategy
{
public:
    virtual void Sort(int* arr, int size) abstract;
};

class BubbleSort : public SortStrategy
{
public:

    virtual void Sort(int* arr, int size) override
    {
        int temp;

        for (int i = 0; i < size - 1; i++) 
        {
            for (int j = 0; j < size - i - 1; j++) 
            {
                if (arr[j] > arr[j + 1]) 
                {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
};

class QuickSort : public SortStrategy
{
public:

    virtual void Sort(int* arr, int size) override
    {
        int left = 0;
        int right = size - 1;

        int mid = arr[size / 2];

        do
        {

            while (arr[left] < mid)
            {
                left++;
            }

            while (arr[right] > mid)
            {
                right--;
            }

            if (left <= right)
            {
                int tmp = arr[left];
                arr[left] = arr[right];
                arr[right] = tmp;

                left++;
                right--;
            }

        } while (left <= right);


        if (right > 0)
        {
            Sort(arr, right + 1);
        }
        if (left < size)
        {
            Sort(&arr[left], size - left);
        }
    }
};

