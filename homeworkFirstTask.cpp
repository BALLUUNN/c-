#include <iostream>
#include <string>
#include <stdio.h> 
#include <time.h> 

std::string goToBinarry(unsigned short int n) {
    std::string str = "";
    std::string result = "";

    while (n > 0) {
        str += std::to_string(n % 2);
        n /= 2;
    }

    while (str.length() < 16) {
        str += '0';
    }

    for (int i = str.length(); i >= 0; --i) {
        result += str[i];
    }

    
    return result;
}

std::string gluing() {

    unsigned short int num1, num2;
    std::string result = "";


    std::cout << "Input your first number: " << std::endl;
    std::cin >> num1;

    
    std::cout << "Input your second number: " << std::endl;
    std::cin >> num2;

    std::string binarryOfNum1 = goToBinarry(num1);
    std::string binarryOfNum2 = goToBinarry(num2);

    for (int i = 0; i <= 16; ++i) {
        result += binarryOfNum1[i];
        result += binarryOfNum2[i];
    }
    return result;
}

int main() {

    std::cout << gluing();

    return 0;
}