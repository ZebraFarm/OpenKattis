#include <iostream>
#include <iomanip>

using namespace std;


int main(){
    
    int r,c;
    cin >> r >> c;

    long double pi = 3.1415926535898;
    
    double max_size = pi * r * r;
    double cheese = pi * (r-c) * (r-c);

    cout << setprecision(25);
    cout << cheese / max_size * 100.0;

}

