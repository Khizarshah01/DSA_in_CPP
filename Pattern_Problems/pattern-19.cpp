#include<iostream>
using namespace std;

int main(){

	int n;
	cout<<"Enter the number of rows"<<endl;
	cin>>n;
	int rows=1;
	// while(rows<=n){
	// 	int column = 1;
	// 	while(column<=n-rows){
	// 		cout<<column;
	// 		column++;
	// 	}
	// 	cout<<endl;
	// 	rows++;
	// }


	// Stars

	while(rows<=n){
		int spaces = 0;;
		// while(spaces<=n-rows){
		// 	cout<<" ";
		// 	spaces++;
		// }
		int column = 1;
		// while(column<=rows){
		// 	cout<<"*";
		// 	column++;
		// }
		int start = rows;
		while(start<=n){
			cout<<"*";
			column++;
			start++;
		}
		cout<<endl;
		rows++;
	}

	// while(rows<=n){
	// 	int column = 1;
	// 	while(column<=rows){
	// 		cout<<"*";
	// 		column++;
	// 	}
	// 	cout<<endl;
	// 	rows++;
	// }


	// while(rows<=n){
	// 	int spaces = 0;;
	// 	while(spaces<=rows-1){
	// 		cout<<" ";
	// 		spaces++;
	// 	}
	// 	int column = 1;
	// 	while(column<=n-rows){
	// 		cout<<column;
	// 		column++;
	// 	}
	// 	cout<<endl;
	// 	rows++;

	// }



	// Stars

	// while(rows<=n){
	// 	int spaces = 0;;
	// 	while(spaces<=n-rows){
	// 		cout<<" ";
	// 		spaces++;
	// 	}
	// 	int column = 1;
	// 	while(column<=rows){
	// 		cout<<"*";
	// 		column++;
	// 	}
	// 	cout<<endl;
	// 	rows++;
	// }

	// while(rows<=n){
	// 	int column = 1;
	// 	while(column<=rows){
	// 		cout<<"*";
	// 		column++;
	// 	}
	// 	cout<<endl;
	// 	rows++;
	// }

	return 0;
}