#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool is_special_number(int num) {
    vector<int> digits;
    while (num > 0) {
        digits.push_back(num % 10);
        num /= 10;
    }
    if (digits.size() != 3) return false;
    if (digits[0] % 3 == 0 && digits[1] % 3 == 0 && digits[2] % 3 == 0 && digits[0] < digits[1] && digits[1] < digits[2])
        return true;
    return false;
}

int count_special_numbers(int N) {
    int count = 0;
    for (int num = 100; num < min(N + 1, 1000); ++num) {
        if (is_special_number(num)) {
            count++;
        }
    }
    return count;
}

int main() {
    int N;
    cin >> N;

    cout << count_special_numbers(N) << endl;

    return 0;
}

