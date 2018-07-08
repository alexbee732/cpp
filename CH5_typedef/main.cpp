#include <iostream>

using namespace std;

typedef int* int_ptr;

int main(int argc, char** argv) {
    
    int arr [] = {1,2,3,4,5};
    int_ptr p = &arr[3];
    cout << p << ": " << *p;
    
    return 0;
}

