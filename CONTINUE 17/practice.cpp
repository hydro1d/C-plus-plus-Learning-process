#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;

    int count_a = 0;
    for (char c : s) {
        if (c == 'a') {
            ++count_a;
        }
    }

    if (count_a == 1) {
        std::cout << "Bhaizone" << std::endl;
    } else if (count_a > 1 && count_a <= 4 ) {
        std::cout << "Regular" << std::endl;
    } 
    else if (count_a > 5 && count_a <=5) {
        std::cout << "Flirting with you" << std::endl;
    }
    else if ((count_a >= 6 && count_a <=8)) {
        std::cout << "Likes You" << std::endl;
    }
    else if ((count_a > 8 && count_a <=10)) {
        std::cout << "Psychopath" << std::endl;
    }

    else if (count_a > 10) {
        std::cout << "Broken Keyboard" << std::endl;
    } 

    return 0;
}
