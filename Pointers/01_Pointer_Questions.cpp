#include <iostream>
using namespace std;

void update(int *p){
    *p = (*p) * 2;
}

void increment(int **p){
    ++(**p);
}

int main()
{
    // int first = 8;
    // int second = 15;
    // int *ptr = &second;
    // *ptr = 8;
    // cout << first << " " << second << endl;
    
    // int first = 5;
    // int *p = &first;
    // int *q = p;
    // (*q)++;
    // cout << first << endl;

    // int first = 10;
    // int *p = &first;
    // cout << (*p)++ << " ";
    // cout << first << endl;

    // int *p = 0;
    // int first = 110;
    // *p = first;
    // cout << *p << endl;
    
    // int first = 8;
    // int second = 11;
    // int *third = &second;
    // first = *third;
    // *third = *third + 2;
    // cout << first << "  " << second << endl;

    // float f = 12.5;
    // float p = 21.5;
    // float *ptr = &f;
    // (*ptr)++;
    // *ptr = p;
    // cout << *ptr << "  " << f << "  " << p << endl;

    // int arr[5];
    // int *ptr;
    // cout << sizeof(arr) << "  " << sizeof(ptr) << endl;

    // int arr[5] = {11, 21, 13, 14};
    // cout << *(arr) << " " << *(arr+1) << endl;

    // int arr[6] = {11, 12, 41};
    // cout << arr << "  " << &arr << endl;

    // int arr[6] = {11, 12, 31};
    // cout << (arr+1) << endl;
    
    // int arr[6] = {11, 12, 31};
    // int *p = arr;
    // cout << p[2] << endl;
    
    // int arr[6] = {11, 12, 13, 14, 15};
    // cout << *(arr) << "  " << *(arr + 3);

    // int arr[6] = {11, 21, 31, 45};
    // int *ptr = arr++;
    // cout << *ptr << endl;
    
    // char ch = 'a';
    // char *ptr = &ch;
    // ch++;
    // cout << *ptr << endl;

    // char arr[] = "abcde";
    // char *p = &arr[0];
    // cout << p << endl;
        
    // char arr[] = "abcde";
    // char *p = &arr[0];
    // p++;
    // cout << p << endl;
    
    // char str[] = "Shashwat";
    // char *p = str;
    // cout << str[0] << "  " << p[0] << endl; 
    
    // int i = 10;
    // update(&i);
    // cout << i;

    // int first = 110;
    // int *p = &first;
    // int **q = &p;
    // int second = (**q)++ + 9;
    // cout << first << "  " << second;

    // int first = 100;
    // int *p = &first;
    // int **q = &p;
    // int second = ++(**q);
    // int *r = *q;
    // ++(*r);
    // cout << first << "  " << second << endl;

    // int num = 110;
    // int *ptr = &num;
    // increment(&ptr);
    // cout << num;

    return 0;
}
