#include<iostream>
using namespace std;

int main(){

    // Declaring a Array

    int number[3];

    // Initializing a array

    int sec_array[3] = {1, 2, 3};

    // Accessing the value

    cout << "Value at second index is:- "<<sec_array[2] << endl;


    // This is a preety intresting case

    // As you can see below we have an array or size 15 and we only assign it 2 values what is going to be filled in other spaces
    int third_array[15]={10, 20};

    // Printing the array

    for(int i = 0; i < 15; i++){
        cout << i << " Element contains:- " << third_array[i] << endl;
    }



    
    cout << endl << "Everything is fine" << endl;

    return 0;
}
