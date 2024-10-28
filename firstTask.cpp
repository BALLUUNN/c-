#include <iostream>
#include <string>


void numberOfOnes() {
    int num;
    std::string str = "";
    int count = 0;

    std::cout << "Input your number: " << std::endl;
    std::cin >> num;

    while (num > 0) {
        int r = (num % 2);
        str += std::to_string(r);
        num = num / 2;
    }

    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == '1') {
            count += 1;
        } else {
            continue;
        }
    }
    std::cout << str << std::endl;
    std::cout << "Number of 1: " << count << std::endl;

}


int main() {
    numberOfOnes();
    return 0;
}