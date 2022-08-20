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

    int key;
    cout << "Enter the number you want to search for:- " << endl;
    cin >> key;

    int first = first_occ(arr, 5, key);
    int last = last_occ(arr, 5, key);

    cout << "The total number of occurence of " << key << " is " << (last - first) + 1 << endl;

    return 0;
}
