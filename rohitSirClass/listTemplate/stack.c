int push_stack(int stack[], int top, int value) {
    stack[++top] = value;
    return top;
}

int pop_stack(int stack[], int top) {
    return --top;
}

