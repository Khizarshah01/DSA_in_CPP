#include<iostream>
using namespace std;

int getMax(int arr[], int n){


    // The INT_MIN is not working at the moment so I have to use 0 as the hardcoded I will figure out why it's not  working
    int max = 0;

    for(int i = 0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    return max;

}


int main(){

    int size;
    cout << "Enter the size of the array:- ";
    cin>>size;

    int number[100];

    for(int i = 0; i<size; i++){
        cout << "Enter the " << i+1 << " element:- ";
        cin>>number[i];
    }


    cout << "The max number is " << getMax(number, size);


    return 0;
}
