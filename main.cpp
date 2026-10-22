#include <iostream>

void fib(int n) {
    int a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        std::cout << a << std::endl;
        int next = a + b;
        a = b;
        b = next;
    }
}

int main() {
    fib(10);
    return 0;
}
