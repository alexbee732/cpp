#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    char ch[20] {};
    cout << "Enter your full name: ";
    cin.getline(ch, 20);
    // "cin >>" прочитает только до первого пробела!
    //cin >> ch;
    cout << "Hello, " << ch;
    return 0;
}

