#include <iostream>
#include <array>

using namespace std;

struct Student 
{
    // Можно указать значения по умолчанию (C++11)!!!
    string name = "Name";
    int age = 0;
    double grade = 0;
    
    void print() {
        std::cout << name << ", age: " << age << ", grade: " << grade << endl;
    }
};

int main(int argc, char** argv) {
    
    Student students[] =
    {   
        {"Alex", 30, 5},
        {"Elena", 25, 5},
        {"Vasily", 50, 4}
    };
    for (Student st : students)
        st.print();
    
    // по умолчанию
    Student st;
    st.print();
    
    Student st1 {"Alex", 30, 4};
    st1.print();
    
    return 0;
}

