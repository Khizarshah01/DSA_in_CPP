#include <iostream>
using namespace std;

int main(){

	int n;
	cout<<"Enter the number of rows"<<endl;
	cin>>n;
	int rows = 1;
	char ch = 'A';
	while(rows<=n){
		int columns = 1;
		while(columns<=rows){
			cout<<ch;	
			columns++;
		}
		ch++;
		cout<<endl;
		rows++;
	}

	return 0;
}