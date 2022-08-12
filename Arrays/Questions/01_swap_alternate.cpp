// We have a array we have to swap the alternative values of it.
// arr = {1 , 2, 3, 4, 5} ----> {2, 1, 4, 3, 5} ----> In Odd case
// arr = {1, 2, 3, 4, 5, 6} --> {2, 1, 4, 3, 6, 5} -> In Even case


#include<iostream>
using namespace std;

// Printing function

void printArr(int arr[], int size){

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}



// Function for swaping the alternate

void swapAlt(int arr[], int size){

    for (int i = 0; i < size; i+=2) {

        // Checking if the array still exists
        if( i+1 < size ){
            swap(arr[i], arr[i+1]);
        }

    }

}



int main(){

    int even[8] = {5, 2, 9, 4, 7, 6, 1, 0};

    int odd[5] = {11, 33, 9, 76, 43};

    printArr(even, 8);
    swapAlt(even, 8);
    printArr(even, 8);

    cout << endl;

    printArr(odd, 5);
    swapAlt(odd, 5);
    printArr(odd, 5);

    return 0;
}
