#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde";

    cout << arr << endl;

    cout << ch << endl;
    
    // This will print the entire string as the implementation of the cout function is different for char & int;
    char *c = &ch[0];
    cout << c << endl;
    
    // As the cout outputs the value from 0th char to the \0, what if there is no \0 character
    
    char temp = 'a';
    char *t = &temp;

    cout << "The value of t is:- " << t << endl;

    

    return 0;
}
