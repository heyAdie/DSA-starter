
#include<iostream>
using namespace std;
int main (){

    int n;
    cout << "Enter the number of Students : ";
    cin >> n;

    int marks[n];
    cout << "Enter the marks : ";

    // input_____________________
    for(int i=0; i<=n-1; i++){
        cin >> marks[i];
    }

    //  output____________________
    for( int i=0; i<=n-1; i++){
        if(marks[i] < 35) cout << i << " ";
    }
}