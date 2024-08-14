#include <unistd.h> // for syscall

int main() {
    const char *msg = "Hello, World!";
    write(1, msg, 13);
    return 0;
}

