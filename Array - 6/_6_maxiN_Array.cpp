
#include<iostream>
#include<climits>
using namespace std;

int main () 
{
    int n;
    cout << "Enter size of Array : ";
    cin >> n;
    int arr[n];

    
    // Input________________________

    for(int i=0; i<=n-1; i++){
        cin >> arr[i];
    }

    // int max = arr[0];
    int max = INT_MIN;
    for(int  i=1; i<=n-1; i++){
        if(max < arr[i]) max = arr[i];
    }
    cout << max;
}