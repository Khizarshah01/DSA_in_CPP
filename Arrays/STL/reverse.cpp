#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> arr){

    int start = 0;
    int end = arr.size()-1;

    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    return arr;

}

void print(vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}



int main(){

    vector<int> arr = {1, 2, 3, 4, 5};

    vector<int> answer = reverse(arr);

    cout << "Printing reverse of the array";
    print(answer);


    return 0;
}
