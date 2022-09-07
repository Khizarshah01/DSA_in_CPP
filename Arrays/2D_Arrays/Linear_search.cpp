#include <iostream>
using namespace std;

bool checkPresence(int arr[][4], int target, int row, int col) {

  for (int row = 0; row < 4; row++) {
    for (int col = 0; col < 4; col++) {
      if (arr[row][col] == target) {
        return 1;
      }
    }
  }
  return 0;
}

int main() {

  int arr[4][4];

  for (int row = 0; row < 4; row++) {
    for (int col = 0; col < 4; col++) {
      cin >> arr[row][col];
    }
  }

  for (int row = 0; row < 4; row++) {
    for (int col = 0; col < 4; col++) {
      cout << arr[row][col] << " ";
    }
    cout << endl;
  }

  cout << "Enter the element you want to search for:- " << endl;
  int target;
  cin >> target;

  if (checkPresence(arr, target, 4, 4)) {
    cout << "Element present" << endl;
  }

  else {
    cout << "Element Not found" << endl;
  }
  return 0;
}