#include <iostream>
using namespace std;


int main(){

    /*
    int arr[10] = {0, 2, 4, 6, 8, 10};


    cout << "The address of first memory block of array is:- " << arr << endl;
    cout << "The address of first memory block of array is:- " << &arr[0] << endl;

    cout << "Value at 0th index:- " << *arr << endl;
    cout << "Value at 0th index + 1 :- " << *arr+1 << endl;
    cout << "Value at 1th index:- " << *(arr+1) << endl;
    //cout << "Value at 1th index:- " << *(arr++) << endl;
    cout << "Value at 1th index:- " << *(arr) + 1 << endl;

    cout << "The value at index 4 is:- " << arr[4] << endl;
    cout << "The value at index 4 is:- " << *(arr+4) << endl;

    int i = 3;
    cout << i[arr] << endl;

   // -----------------------------------------------------------------------------

    // This will give 8 as an output as the address takes 8 bytes itself. 
    int i = 0;
    cout << sizeof(&i) << endl;


    int temp[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // This outputs 40 because the array gives size * size of the datatype, which in our case gives 10 * 4;
    cout << sizeof(temp) << endl;

    // This will give 8 as an output as the address takes 8 bytes itself. 
    cout << sizeof(&temp) << endl;

    // This will give the size of the int as it evaluates to the 0th element in the temp array 
    cout << sizeof(*temp) << endl;

    // This is always gonna output 8 because pointer takes 8 bytes no matter which datatype you use; 
    int *ptr = &temp[0];
    cout << sizeof(ptr) << endl;

    // This will output 4 as the *ptr points to the element of the array & the array is of integer type so it will output 4 bytes in output; 
    cout << sizeof(*ptr) << endl;

    // This is the size which a pointer requires to store a address; 
    cout << sizeof(&ptr) << endl;


    int a[20] = {1, 2, 3, 4, 5, 6, 7};
    cout << &a[0] << endl;
    cout << &a << endl;
    cout << a << endl;

    int *ptr = &a[0];
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << &ptr << endl;

*/

    int arr[10];
    // We can't do this as it's already defined in symbol table, you can't change the address. If you try to do this it will give a error.
    // arr = arr+1;

    // You can do this as this is going to increment the value inside ptr not the actual address of ptr.
    int *ptr = &arr[0];
    cout << ptr << endl;
    ptr = ptr+1;
    cout << ptr << endl;

    return 0;
}
