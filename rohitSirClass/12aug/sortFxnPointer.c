#include<stdio.h>

void compareAsc(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void compareDesc(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void sort(int arr[], int n, void(*compare)(int[], int)){
	compare(arr,n);
}

int main(){
	int arr[7]={64, 34, 25, 12, 22, 11, 90};
	printf("original array: \n");
	printArray(arr,7);

	sort(arr,7,compareAsc);
	printf("sorted array in ascending order: \n");
	printArray(arr,7);

	sort(arr,7,compareDesc);
	printf("sorted array in descending order: \n");
	printArray(arr,7);
	
	return 0;

}
