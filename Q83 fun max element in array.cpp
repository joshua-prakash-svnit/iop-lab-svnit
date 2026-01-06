#include <stdio.h>

int find_max_element(int arr[], int size);

int main() {
    int size, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter %d integers, separated by spaces: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    int max = find_max_element(array, size);

    printf("The maximum element in the array is: %d\n", max);

    return 0;
}

int find_max_element(int arr[], int size) {
    int max_element = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max_element) {
            max_element = arr[i];
        }
    }

    return max_element;
}

