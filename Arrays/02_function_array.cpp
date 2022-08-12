#include<iostream>
using namespace std;


void printArray(int arr[], int size){

    cout << "Printing the array" << endl;
    for(int i = 0; i <= size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Done Printing" << endl;
}


int main(){


    int number[15] = { 0 };

    printArray(number, 15);

    return 0;
}
