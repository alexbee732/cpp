#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    ofstream fout;
    fout.open("out.txt");
    fout << "Hello file out!" << endl;
    fout.close();
    
    char str[20];
    ifstream fin;
    fin.open("out.txt");
    fin.getline(str, 20);
    cout << str << endl;
    fin.close();
    
    return 0;
}

