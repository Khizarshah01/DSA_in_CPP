#include <iostream>
using namespace std;

int main(){

	int n;
	cout<<"Enter the number of rows"<<endl;
	cin>>n;
	int rows = 1;
	while(rows<=n){
		int columns = 1;
		int value = rows;
		while(columns<=rows){
			cout<<value;
			value++;		
			columns++;
		}
		cout<<endl;
		rows++;
	}

	return 0;
}