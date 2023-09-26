#include <stdio.h>

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
       printf("%d ", arr[i]);
    }
    
    printf("\n");
}

void swap(int *a, int *b) {
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}

int partition(int arr[], int low, int high)
{
	int pivot = arr[high];

	
	int i = (low - 1);

	for (int j = low; j <= high - 1; j++) {

		if (arr[j] < arr[high]) {

			i++;
			swap(&arr[i], &arr[j]);

		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void quick_sort(int arr[], int low, int high)
{
	if (low < high) {

		int partitionIndex = partition(arr, low, high);

		quick_sort(arr, low, partitionIndex - 1);
		quick_sort(arr, partitionIndex + 1, high);
	}
}


int main()
{
	int arr[] = {5, 3, 2, 4, 1, 6};
	int n = sizeof(arr) / sizeof(arr[0]);


	printf("The array before sorting: \n");
    printArray(arr, n);

    quick_sort(arr, 0, n-1);
    printf("The sorted array: \n");
    printArray(arr, n);


	return 0;
}
