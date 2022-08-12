#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;

    // int mid = (start+end)/2; We can use this but let's consider a case where you get a
    // preety large value which is making the sum more than the integer can store, so to overcome
    // this problem we used
    int mid = start + (end - start)/2;

    while(start <= end){

        if(arr[mid] == key){
            return mid;
        }

        if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end - start)/2;

    }

    return -1;

}


int main(){

    int even[8]={2, 4, 6, 8, 10, 12, 14, 16};
    int odd[7]={3, 6, 9, 12, 15, 18, 21};


    int evenIndex = binarySearch(even, 8, 4);

    if(evenIndex == -1){
        cout << "Element not found" << endl;
    }
    else{
    cout << "Index of 14 is:-" << evenIndex << endl;
    }

    int oddIndex = binarySearch(odd, 7, 12);

    if(oddIndex == -1){
        cout << "Element not found" << endl;
    }
    else{
    cout << "Index of 12 is:-" << oddIndex << endl;
    }

    return 0;
}
