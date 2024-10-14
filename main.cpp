#include <iostream>
#include <string>
using namespace std;

void generatePoint(int n) {
    string result = "";
    int r = 1;
    while (r <= n) {
        result += "*";
        cout << result << endl;
        ++r;
    }
    
}

int main() {
    generatePoint(10);
    return 0;
}