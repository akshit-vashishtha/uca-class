#include<stdio.h>

int main(){
	int arr[5]={0,1,2,3,4};
	int *ptr=arr;
	for(int i=0;i<=6;++i){
		printf("%d, ",*(arr+i));
	}

	return 0;
}
