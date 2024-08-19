int push_queue(int queue[], int rear, int value) {
    queue[++rear] = value;
    return rear;
}

int pop_queue(int queue[], int front) {
    return ++front;
}

