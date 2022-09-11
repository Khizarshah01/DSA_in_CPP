#include <iostream>
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

void printcolSum(int arr[][3], int row, int col){
    cout << "Printing the column wise sum" << endl;
    for(int col=0; col<3; col++){
        int sum = 0;
        for(int row = 0; row<3; row++){
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
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

  printcolSum(arr, 3, 3);

  return 0;
}
