#include <stdio.h>

void fun(int arr[], int size) {
    int left = 0;
    int right = size - 1;

    while (left < right) {
        while (arr[left] % 2 != 0) {
            left++;
        }

        while (arr[right] % 2 == 0) {
            right--;
        }

        if (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
    }
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int size = sizeof(arr) / sizeof(arr[0]);
    fun(arr, size);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}