/*

Make a pattern like below

1234554321
1234**4321
123****321
12******21
1********1

The comments are demonstrated for n = 5;

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of rows."<<endl;
    cin>>n;
    int rows = 1;
    
    while(rows<=n){

        /* 

        Printing 1st pattern (number) 

        12345            --> 1st row                 
        1234             --> 2nd row
        123              --> 3rd row
        12               --> 4th row
        1                --> 5th row

        */

        int column = 1;
        while(column<=n-rows+1){
            cout<<column<<" ";
            column++;
        }



       /* Printing the second pattern ( * one )

        1st nothing            --> 1st row
            **                 --> 2nd row                
           ****                --> 3rd row                
          ******               --> 4th row                    
         ********              --> 5th row    

        */  
                    

        int k = 0;
        while (k != 2 * rows-2 ) {
         printf("* ");
         ++k;
        }

        /* Printing the third pattern ( reverse numbers )

        54321                --> 1st row                 
         4321                --> 2nd row
          321                --> 3rd row
           21                --> 4th row
            1                --> 5th row

        */

        int start = n-rows+1;
        while(start!=0){
            cout<<start<<" ";
            start--;
            if(start==0){
                break;
            }
        }

        cout<<endl;
        rows++;
    }

    /* Final Pattern looks like this

        1234554321
        1234**4321
        123****321
        12******21
        1********1

    */

    return 0;
}