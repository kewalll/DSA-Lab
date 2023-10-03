#include <stdio.h>
int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high)
    {
    int mid = low + (high-low)/2;
    if (arr[mid] == target)
        return mid;
    if (arr[mid] < target)
        low = mid + 1;
    else
        high = mid - 1;
    }
    return -1;
}

int main() {
    int target;
    int arr[] = {13,19,24,36,48,51,62,69,74,92};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Enter target element : ");
    scanf("%d",&target);
    
    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1) {
        printf("Element %d found at index %d\n", target, result);
    } 
    else {
        printf("Element not found in the array\n");
    }

    return 0;
}