#include <iostream>
#include "Array.h"

int main()
{
    int* ar = new int[5]{ 1,2,3,4,5 };
    float* arr = new float[10]{ 1.2f, 3.3f, 5.4f, 6.2f, 1.3f, 5.8f, 3.8f, 2.1f, 5.4f, 6.5f };
    Array<int> ar1;
    Array<float> ar2;

    ar1.SetArray(ar);
    ar1.SetLength(5);
    ar1.Print();
    int Sum1 = ar1.SumOfThree();
    std::cout << Sum1 << std::endl;
    std::cout << std::endl;

    ar2.SetArray(arr);
    ar2.SetLength(10);
    ar2.Print();
    float Sum2 = ar2.SumOfThree();
    std::cout << Sum2;
}