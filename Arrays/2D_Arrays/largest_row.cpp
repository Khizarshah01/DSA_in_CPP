#include <iostream>
#include <climits>
using namespace std;


// Printing the row wise sum
void printrowSum(int arr[][3], int row, int col){
    cout << "Printing the row wise sum" << endl;
    for(int row=0; row<3; row++){
        int sum = 0;
        for(int col = 0; col<3; col++){
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int largestRow(int arr[][3], int row, int col){
    int max = INT_MIN;
    int rowIndex = -1;
    for(int row=0; row<3; row++){
        int sum = 0;
        for(int col = 0; col<3; col++){
            sum += arr[row][col];
        }

        if(sum > max){
            max = sum;
            rowIndex = row;
        }
    }
    cout << "The max sum is " << max << endl;
    return rowIndex;

}
int main() {

  int arr[3][3];

// Taking input from the user

  cout << "Enter the elements" << endl;

  for (int row = 0; row < 3; row++) {
    for (int col = 0; col < 3; col++) {
      cin >> arr[row][col];
    }
  }

// Outputting the elements

  cout << "Printing the elements" << endl;

  for (int row = 0; row < 3; row++) {
    for (int col = 0; col < 3; col++) {
      cout << arr[row][col] << " ";
    }
    cout << endl;
  }

  printrowSum(arr, 3, 3);

  int ans = largestRow(arr, 3, 3);
  cout << "Max row is at index "  << ans << endl;

  return 0;
}
