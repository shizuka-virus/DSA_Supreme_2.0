#include <iostream>

int main() {
    int N;
    bool isPrime;

    std::cout << "Enter the value of N: ";
    std::cin >> N;

    std::cout << "Prime numbers between 1 and " << N << " are:\n";

    for (int i = 2; i <= N; i++) {
        isPrime=-true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}
