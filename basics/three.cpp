// Array

#include<iostream>

using namespace std;

int totalChaiServed(int chai[],int size){
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += chai[i];
    }
    
    return total;

}
int main(){

    int chaiServed[5] = {80, 85, 90, 70, 95};

    int total = totalChaiServed(chaiServed, 5);
    cout << total << endl;

    return 0;
}