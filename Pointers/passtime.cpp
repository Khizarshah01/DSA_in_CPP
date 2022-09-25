#include "iostream"
using namespace std;

int main(){

    cout << "If we assign the 0 to the pointer it will give us a segmentation fault, 0 means point to the memory which do not exists if we try to print it" << endl;
    //int *ptr = 0;

    //cout << *ptr << endl;
    

    //int i = 5;
    //int *p = &i;
    //int *p = 0;
    //p = &i;

    //cout << p <<  endl;
    //cout << *p << endl;


    int num = 56;
    int a = num;
    a++;

    cout << num << endl;

    int * p = &num;
    cout << "before:- " << num << endl;
    (*p)++;
    cout << "after:- " << num << endl;
    
    // Copying pointer to pointer

    int *q = p;
    cout << p << " -- " << q << endl;
    cout << *p << " -- " << *q << endl;


    return 0;
}
