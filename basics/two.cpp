// OOP concepts in C++


#include<iostream>
#include<vector>

using namespace std;

class Tea {

    public:

    // data memebers
    string teaName;
    int servings;
    vector<string> ingredients; // list of ingredients for tea


    // Member functions

    void displayTea(){
        cout << "Tea Name: " << teaName << endl;
        cout << "Servings: " << servings << endl;
        cout << "Ingredients: ";

        for(string ing : ingredients){    // Specialised loop for array
            cout << ing << " ";
        }
        cout << endl;

    }

};

int main(){

    Tea tea;  // Class object

    tea.teaName = "Masala Tea";
    tea.servings = 5;
    tea.ingredients = {"Water", "Tea leaves", "Sugar"};
    tea.displayTea();
    
    cout << endl;

    Tea tea2;

    tea2.teaName = "Lemon Tea";
    tea2.servings = 2;
    tea2.ingredients = {"Water", "Honey", "Lemon"};
    tea2.displayTea();
    return 0;
}