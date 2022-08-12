#include<iostream>
using namespace std;

void update(int arr[], int n){

    cout << endl << "Inside the function" << endl;


    // Updating the first element of the array
    arr[0] = 523;


    for(int i = 0; i < 3; i++){
        cout << arr[i] << " ";
    }
    cout << endl;


    cout << "Returning to home" << endl;
}


int main(){


    int arr[3] = {1, 2, 3};

    update(arr, 3);

    for(int i = 0; i < 3; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
