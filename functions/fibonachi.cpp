//fiboachi
#include <iostream>

/**
 * Prints the first n terms of the Fibonacci sequence.
 * n: The number of terms to display.
 */
void printFibonacci(int n) {
    long long t1 = 0, t2 = 1, nextTerm = 0;

    for (int i = 1; i <= n; ++i) {
        // Prints the first two terms as 0 and 1
        if(i == 1) {
            std::cout << t1 << " ";
            continue;
        }
        if(i == 2) {
            std::cout << t2 << " ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        std::cout << nextTerm << " ";
    }
    std::cout << std::endl;
}

int main() {
    int terms = 100;
    std::cout << "First " << terms << " terms: ";
    printFibonacci(terms);
    return 0;
}

