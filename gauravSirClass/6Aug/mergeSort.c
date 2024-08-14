//merge sort is basically a divide n conquer problem:
#include<stdio.h>


void merge(int arr[], int aux[], int left, int mid, int right){
	for(int k=left; k<=right ; k++) aux[k]=arr[k];
	int i=left;
	int j=mid+1;
	for(int k=left;k<=right;++k){
		if(i>mid)
	}
}

void mergeSortRecursive(int arr[], int aux[], int left, int right){
	if(left>=right) return;
	int mid=(left+right)/2;
	mergeSortRecursive(arr,aux,left,mid);
	mergeSortRecursive(arr,aux,mid+1,right);
	merge(arr, aux, left, mid, right);
}

void mergeSort(int arr[], int n){
	int* aux={int*} malloc(n * sizeof(int));
	mergeSortRecursive(arr, aux, 0, n-1);
	free(aux);
}

int main(){
	return 0;
}
