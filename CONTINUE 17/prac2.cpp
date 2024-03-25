#include <iostream>
#include <cmath>

bool is_prime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

std::string has_prime_multiple_of_N(int N) {
    // Check if there exists any prime number that is a multiple of N
    for (int i = 2; i <= N; ++i) {
        if (N % i == 0 && is_prime(i)) {
            return "Yes";
        }
    }
    return "No";
}

int main() {
    int N;
    std::cin >> N;

    std::string result = has_prime_multiple_of_N(N);
    std::cout << result << std::endl;

    return 0;
}
