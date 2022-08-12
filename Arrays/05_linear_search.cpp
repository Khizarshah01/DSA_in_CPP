// Find whether 1 is present in an array.

#include<iostream>
using namespace std;

// Creating a function search

bool search(int arr[], int size, int key){

    for(int i = 0; i < size; i++){
        if(arr[i]==key){
            return 1;
        }
    }

    return 0;
}


int main(){

    int arr[10] = {5, -532, 12, 53, -12, 5, 1, 3, 54, 18};

    cout << "Enter the element you want to search for" << endl;
    int key;
    cin >> key;

    bool ans = search(arr, 10, key);

    if(ans){
        cout << "Key is present" << endl;
    }
    else{
        cout << "Key is not present" << endl;
    }


    return 0;
}
