#include<iostream>
using namespace std;

int a = 5;

void func() {
    extern int a;
    cout << "Address of func variable a: " << &a << endl;
    a++;
    cout << "Size of variable: " << sizeof(a) << endl;
    cout << "The variable is :" << a << endl;
    cout << endl;
}

int main() {
    func();
    func();
    func();
    cout << "The variable is :" << a << endl;
    cout << "Address of global variable a: " << &a;
    return 0;
}
