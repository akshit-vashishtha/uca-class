#include <stdio.h>
#include <stdlib.h>

void* myCalloc(int num, int size) {
    int totalSize = num * size;

    int* arr = malloc(totalSize);

    for (int i = 0; i < num; i++) {
        *(arr+i) = 0;
    }
    return arr;
}

int main() {
	
    	int* arr = (int*)myCalloc(10, sizeof(int));
    	if (arr != NULL) {
       	    for (int i = 0; i < 10; i++) {
            	printf("%d ", arr[i]); 
            }
        	printf("\n");
    	}	

    	free(arr);

    	return 0;
}

