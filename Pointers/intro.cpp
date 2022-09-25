#include <iostream>
using namespace std;

int main(){

    int num = 20;

    cout << num << endl;

    // Printing the address
    
    cout << "Address is:- " << &num << endl;
   

    int *ptr = &num;
    
    cout << "Address is:- " << ptr << endl;

    // * is called as dereferencing operator

    cout << "Value is:- " << *ptr << endl;

    char ch = 'a';
    char *chr = &ch;
    
    cout << "Size of integer is:- " << sizeof(num) << endl;
    cout << "Size of pointer is:- " << sizeof(ptr) << endl;
    cout << "Size of character pointer is:- " << sizeof(chr) << endl;


    // Size is going to be 8 bytes with every data type





    return 0;
}
