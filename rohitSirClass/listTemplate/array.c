#include <stdio.h>
#include "temp.h"

int main() {
    int stack[100];
    int queue[100];
    int stackTop = -1;
    int queueFront = 0, queueRear = -1;
    //stack
    stackTop = push_stack(stack, stackTop, 10);
    stackTop = push_stack(stack, stackTop, 20);
    stackTop = pop_stack(stack, stackTop);
    printf("Popped from stack: %d\n", stack[stackTop + 1]);

    //queue
    queueRear = push_queue(queue, queueRear, 30);
    queueRear = push_queue(queue, queueRear, 40);
    queueFront = pop_queue(queue, queueFront);
    printf("Popped from queue: %d\n", queue[queueFront - 1]);

    return 0;
}
