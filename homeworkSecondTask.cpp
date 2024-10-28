#include <iostream>

void rotateSemiBite() {
    unsigned int num, tmp;
    std::cout << "Input your number: " << std::endl;
    std::cin >> num;

    tmp = num & 4026531855;
    tmp = tmp | (((num & 15728640) << 4) | ((num & 251658240) >> 4));
    tmp = tmp | (((num & 61440) << 4) | ((num & 983040) >> 4));
    tmp =  tmp | (((num & 240) << 4) | ((num & 3840) >> 4));

    std::cout << "Your number: " << tmp <<  std::endl;
    
}

int main() {
    rotateSemiBite();
    return 0;
}