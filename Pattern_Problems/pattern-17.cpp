#include <iostream>
using namespace std;

int main(){

	int n;
	cout<<"Enter the number of rows"<<endl;
	cin>>n;
	int rows = 1;
	
	while(rows<=n){
		
		int spaces = n-rows;
		while(spaces){
			cout<<" ";
			spaces--;
		}
		int columns = 1;
		while(columns<=rows){
			cout<<"*";
			columns++;
		}
		cout<<endl;

		rows++;

	}


	return 0;
}




