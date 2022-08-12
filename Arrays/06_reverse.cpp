// Reverse a array
#include<iostream>
using namespace std;


void reverse(int arr[], int n){

    int start = 0;
    int end = n-1;

    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArr(int arr[], int n){
    for(int i = 0; i < n; i++){

        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){


    int arr[6] = {6, 5, 4, 3, 2, 1};

    int brr[5] = {5, 4, 3, 2, 1};


    cout << "Array before reverse is" << endl;

    printArr(arr, 6);
    printArr(brr, 5);

    cout << "Array after reverse is" << endl;

    reverse(arr, 6);
    reverse(brr, 5);

    printArr(arr, 6);
    printArr(brr, 5);



    return 0;
}
