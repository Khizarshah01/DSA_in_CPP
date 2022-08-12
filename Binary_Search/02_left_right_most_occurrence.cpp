#include<iostream>
using namespace std;

int first_occ(int arr[], int size, int key){

    int s = 0;
    int e = size - 1;


    int mid = s+(e-s)/2;
    int ans = -1 ;

    while(s <= e){
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }

        else if(key > arr[mid]){//Shifting start
           s = mid + 1;
        }

        else if(key < arr[mid]){//Shifting end
           e = mid - 1;
        }

    mid = s+(e-s)/2;

    }

return ans;

}

int last_occ(int arr[], int size, int key){

    int s = 0;
    int e = size - 1;


    int mid = s+(e-s)/2;
    int ans = -1 ;

    while(s <= e){
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }

        else if(key > arr[mid]){//Shifting start
           s = mid + 1;
        }

        else if(key < arr[mid]){//Shifting end
           e = mid - 1;
        }

    mid = s+(e-s)/2;

    }

return ans;

}

int main(){

    int arr[5] = {1, 2, 3, 3, 5};


    int first = first_occ(arr, 5, 3);
    int last = last_occ(arr, 5, 3);

    cout << "The First index is:- " << first << endl;
    cout << "The Last index is:- " << last;

    return 0;
}
