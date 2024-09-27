#include <iostream>
#include <vector>
#include <limits>
template <typename T>
T findMin(const std::vector<T>& arr) 
{
    if (arr.empty()) {
        throw std::invalid_argument("Array cannot be empty.");
    }

    T minValue = std::numeric_limits<T>::max();
    for (const T& elem : arr) {
        if (elem < minValue) {
            minValue = elem;
        }
    }

    return minValue;
}

int main() 
{
    std::vector<int> intArr = {4, 2, 9, 1, 6};
    std::vector<double> doubleArr = {2.5, 0.1, 3.6, 1.1};
    std::cout << "Minimum in int array: " << findMin(intArr) << std::endl;
    std::cout << "Minimum in double array: " << findMin(doubleArr) << std::endl;
    return 0;
}
