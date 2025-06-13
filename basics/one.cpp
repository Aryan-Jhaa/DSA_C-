// Starting DSA w c++

#include <iostream>
#include<string>
using namespace std;

int main(){
    cout << "Learning DSA for placements" << endl;

// If-Else:

    string userInput;
    cout << "What is your favourite type of tea: \n";

    getline(cin, userInput);

    if (userInput == "Ice Tea")
     {
        cout << "User's favourite is Ice Tea" << endl;
     }
    else
     {
        cout << "User's favourite is " << userInput << endl;
     }
    
    
    return 0;

}

