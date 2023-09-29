#include <iostream>

using namespace std;

struct estructura_inicial {
    int x;
    float p;
    char nombre[10];
};

union union_inicial {
    int m;
    long a;
    char s[10];
};

int main() {
    estructura_inicial E;
    union_inicial U;

    cout << "Tamaño de memoria ocupado por la estructura E: " << sizeof(E) << " bytes" << endl;
    cout << "Tamaño de memoria ocupado por la unión U: " << sizeof(U) << " bytes" << endl;

    return 0;
}
