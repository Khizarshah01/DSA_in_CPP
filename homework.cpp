#include <iostream>
using namespace std;

int main() {
    
    char user;
    cout<< "Enter a Character:- "<< endl;
    cin>>user;
    
    if(user>=97 && user<=112)
    {
        cout<< "Small";
    }
    else if(user>=65 && user<=90)
    {
        cout<< "Large";
    }
    else if(user>=48 && user<=57)
    {
        cout<< "Number";
    }
    else{
        cout<< "Others";
    }
    
    
    return 0;
}
