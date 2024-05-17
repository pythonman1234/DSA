
#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int *ptr = &num;

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Value of ptr: " << ptr<<endl;
    cout << "Value pointed by ptr: " << *ptr << endl;   *ptr = 20; // Changing the value using the pointer

    cout << "Updated value of num: " << num << endl;

    return 0;
}
