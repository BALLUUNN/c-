#include <iostream>

void shiftsOfNumber() {
    unsigned int num, shifts;
    char str;

    std::cout << "Input your number: " << std::endl;
    std::cin >> num;

    std::cout << "Input number of shifts: " << std::endl;
    std::cin >> shifts;

    std::cout << "Input side(right(r) or left(l)): " << std::endl;
    std::cin >> str;

    std::cout << "Your result: " << std::endl;
    for (int i = 1; i <= shifts; ++i) {

        if (str != 'l' && str != 'r') {
            std::cout << "Input values ​​error" << std::endl;
        }

        if (str == 'l') {
            std::cout << (num << i) << std::endl;
        } else {
            std::cout << (num >> i) << std::endl;
        }
        
    }
}

int main() {
    shiftsOfNumber();

    return 0;
}