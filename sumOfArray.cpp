#include <iostream>
using namespace std;

int sumOfArray(int arr[], int size, int currentIndex = 0){
    if (currentIndex == size) {
        return 0;
    } else {
        int result = arr[currentIndex] + sumOfArray(arr, size, currentIndex + 1);
        return result;
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int sum = sumOfArray(arr, size);
    cout << "Sum of the array elements: " << sum << endl;

    return 0;
}
