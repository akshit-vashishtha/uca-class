#include <stdio.h>

int add(int a, int b){ return a+b;}
int sub(int a, int b){ return a-b;}
int mult(int a, int b){ return a*b;}
int div(int a, int b){return a/b;}

int performOperation(int (*operation)(int, int), int a, int b) {
	return operation(a, b);
}

int main() {
    	int a = 5, b = 3;

   	printf("a:%d  b:%d\n",a,b); 
    	printf("Addition: %d\n", performOperation(add, a, b));
    	printf("Subtraction: %d\n", performOperation(sub, a, b));
    	printf("Multiplication: %d\n", performOperation(mult, a, b));
	printf("Division: %d\n", performOperation(div,a,b));

	return 0;
}

