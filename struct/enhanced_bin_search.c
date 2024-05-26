#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid; 
        }

        if (arr[mid] < target) {
            if((arr[mid+1])==target)
            return mid+1;
            low = mid + 2;
        } 
        else {
            if((arr[mid-1])==target)
            return mid-1;
            high = mid - 2;
        }
    }

    return -1;
}

int main() {
    int arr[] = {1,2,4,5,31};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 0;

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        printf("Element is present at index %d\n", result);
    } else {
        printf("Element is not present in the array\n");
    }

    return 0;
}
