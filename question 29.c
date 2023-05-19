#include <stdio.h>

int linearSearch(int array[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (array[i] == key) {
            return i; // Return the index where the key is found
        }
    }
    return -1; // Return -1 if the key is not found
}

int main() {
    int array[] = {4, 2, 7, 1, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int key = 7;

    int index = linearSearch(array, size, key);

    if (index != -1) {
        printf("Element %d found at index %d\n", key, index);
    } else {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}

OUTPUT
Element 7 found at index 2
