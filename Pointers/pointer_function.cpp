#include <iostream>
using namespace std;

void print(int *p){
    
    cout << *p << endl;

}

void update(int *p){

    //cout << "Inside:- " << p << endl;
    *p = *p + 1;

}

int getSum(int *arr, int n){

    // This will output 8 bytes as you pass the array to a function it parse it as a pointer;
    cout << "Size:- " << sizeof(arr) << endl;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}


int main()
{
    /*
    int value = 5;
    int *p = &value;

    cout << "before change:- " << *p << endl;
    update(p);
    cout << "after change:- " << *p << endl;
    */

    int arr[6] = {1, 2, 3, 4, 5, 8};

    cout << "Sum is:- " << getSum(arr+3, 3) << endl;

    return 0;
}
