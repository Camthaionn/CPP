#include <iostream>

void test(int arr[3], int size) {


    for (int i = 0; i < size; i++) {
        std::cout << arr[i];
    }
}

int main() {
    int arr[3] = { 1, 2, 3 };
    int size = 3;

    test(arr, size);
}
