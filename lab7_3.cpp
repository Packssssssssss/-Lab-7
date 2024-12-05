#include <iostream>
using namespace std;

char before(char ch) {
    if (ch >= 'A' && ch <= 'Z') { 
        if (ch == 'A') {
            return 'Z'; 
        } else {
            return ch - 1; 
        }
    } else {
        return '0'; 
    }
}

int main() {
    cout << before('A') << endl; // ควรได้ 'Z'
    cout << before('B') << endl; // ควรได้ 'A'
    cout << before('P') << endl; // ควรได้ 'O'
    cout << before('T') << endl; // ควรได้ 'S'
    cout << before('Z') << endl; // ควรได้ 'Y'
    cout << before('a') << endl; // ควรได้ '0'
    cout << before('0') << endl; // ควรได้ '0'
    cout << before('c') << endl; // ควรได้ '0'
    return 0;
}

