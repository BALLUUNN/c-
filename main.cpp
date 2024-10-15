#include <iostream>
#include <string>
using namespace std;

void generatePoint(int n) {
    string result = "";
    int r = 1;
    int l = n;
    while (r <= n) {
        for (int i = l - 1; i >= 0; --i) {
            result += " ";
        }
        for (int i = 0; i < (2*r - 1); ++i) {
           result += "*";
        }
        ++r;
        --l;
        cout << result << endl;
        result = "";
    }
}

int main() {
    int n;
    cout << "Enter your number: ";
    cin >> n;
    
    generatePoint(n);
    return 0;
}