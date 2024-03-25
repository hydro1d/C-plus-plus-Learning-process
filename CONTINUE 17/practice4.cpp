#include <iostream>

bool is_special_number(int num) {
    return num % 3 == 0 && num % 10 < num / 10 % 10 && num / 10 % 10 < num / 100 && num >= 100 && num < 1000;
}

int count_special_numbers(int N) {
    int count = 0;
    for (int num = 100; num < std::min(N + 1, 1000); ++num) {
        if (is_special_number(num)) {
            count++;
        }
    }
    return count;
}

int main() {
    int N;
    std::cin >> N;

    std::cout << count_special_numbers(N) << std::endl;

    return 0;
}
