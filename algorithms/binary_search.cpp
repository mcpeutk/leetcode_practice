#include <iostream>
#include <vector>

int binary_search(std::vector<int> array, int target) {
    int start = 0;
    int end = array.size() - 1;

    int middle = start + (end - start) / 2;

    while (start <= end) {
        if (target < array[middle]) {
            end = middle - 1;
        } else if (target > array[middle]) {
            start = middle + 1;
        } else {
            break;
        }
        middle = start + (end - start) / 2;
    }

    if (array[middle] != target) {
        middle = -1;
    }

    return middle;
}

int main() {
    std::vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 8;

    int elem_index = binary_search(array, target);

    std::cout << "Array: ";
    for (int elem : array) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    std::cout << "Element to find: " << target << std::endl;

    if (elem_index != -1) {
        std::cout << "Index of found element: " << elem_index << std::endl;
    } else {
        std::cout << "No such element in the given array" << std::endl;
    }

    return 0;
}
