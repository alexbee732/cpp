#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    int* ps = new int;
    *ps = 5;
    cout << ps << ": " << *ps << endl;
    delete ps;
    
    int* arr = new int[5] {1,2,3,4,5};
    cout << arr[3] << endl;
    delete [] arr;
    
    cout << &"hello";
    
    
    return 0;
}

