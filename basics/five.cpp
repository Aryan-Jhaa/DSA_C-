#include<iostream>

using namespace std;

void printPattern(int n){

 for(int i=1; i<=n; i++){

        for (int j = 0; j <n-i+1; j++)
        {
            cout << "* ";
        }
        cout << endl;        
    }    
}

int main(){
   int t;
   cin >> t;
   printPattern(t);

return 0;
}