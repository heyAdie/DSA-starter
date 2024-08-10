
#include<iostream>
using namespace std;
int main() {
     int n;
    cout << "enter n : ";
    cin >> n;
    int r;
    cout << "Enter r : ";
    cin >> r;
    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact(n-r);
    int ncr = nfact/(rfact*nrfact);
    cout << ncr;
    }