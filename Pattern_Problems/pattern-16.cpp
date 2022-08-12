#include <iostream>
using namespace std;

int main(){

	int n;
	cout<<"Enter the number of rows"<<endl;
	cin>>n;
	int rows = 1;
	
	while(rows<=n){
		int columns = 1;
		char start = 'A'+n-rows;
		while(columns<=rows){
			cout<<start;
			start++;
			columns++;
		}
		cout<<endl;
		rows++;
	}


	return 0;
}