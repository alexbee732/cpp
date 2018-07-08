#include <iostream>
#include <array>

using namespace std;

// {} (C++11) Списковая инициализация
int main(int argc, char** argv) {

    char ch1 = {'a'};
    cout << ch1 << endl;
    
    char ch2[] {"Hello, world!"};
    cout << ch2 << endl;
    
    char* ch3 = "Hello, world!";
    cout << ch3 << endl;
    
    int arr1[3] = {1,2,3};
    double arr2[] {0.2, 0.4, 1.1, 4.2};
    
    array<int, 5> arr3 {0, 1, 2, 3, 4};
    for (int &el : arr3)
        cout << ++el << ' ';
    cout << endl;
    
    const int ArrSize = 3;
    int arr4 [ArrSize][ArrSize] = 
    {   
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    
    for (int* row : arr4) {
        for (int i = 0; i < ArrSize; ++i) {
            cout << row[i] << '\t';
        }
        cout << endl;
    }
        
    short arr5 [5] {};   // инициализация нулями
    for (short s : arr5)
        cout << s << ' ';
    cout << endl;
    
    // Не даст сузить данные!
    //int j = {0.5};
    return 0;
}

