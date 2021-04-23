#pragma once
#include <iostream>

template <typename T>
class Array
{
private:
    int n;
    T *arr;

public:

    int GetLength()
    {
        return n;
    }

    T* GetArray()
    {
        return arr;
    }

    void SetLength(int length)
    {
        n = length;
    }

    void SetArray(T *ar)
    {
        arr = ar;
    }

    void Print()
    {
        for (int i = 0; i < n; i++)
        {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }

    T SumOfThree()
    {
        T Sum = 0;
        for(int i = 2; i < n; i += 3)
        {
            Sum += arr[i];
        }

        return Sum;
    }

};

