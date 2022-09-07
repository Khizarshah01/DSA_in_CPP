#include <iostream>
using namespace std;

char tolowercase(char ch) {
  if (ch >= 'a' && ch <= 'z') {
    return ch;
  } else {
    char temp = ch - 'A' + 'a';
  }
}

bool palindrome(char name[], int n) {

  int s = 0;
  int e = n - 1;

  while (s <= e) {
    if (tolowercase(name[s]) != tolowercase(name[e])) {
      return 0;
    } else {
      s++;
      e--;
    }
  }
  return 1;
}

int getsize(char name[]) {
  int count = 0;
  for (int i = 0; name[i] != '\0'; i++) {
    count++;
  }
  return count;
}

int main() {

  char name[20];

  cout << "Enter your name:- ";
  cin >> name;

  cout << "Your name is:- " << name << endl;

  int size = getsize(name);
  cout << "Length is:- " << size << endl;

  cout << "Your name is:- " << name << endl;

  cout << "palindrome or not:- " << palindrome(name, size) << endl;

  return 0;
}