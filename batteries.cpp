#include <cmath>
#include <iostream>


//My approach return  n / (i + 1) + std::max( i, n % (i+1) )
// Looping up to n and grab the minimum.

//Do not completely understand from copied answer
//https://github.com/HermonMulat/Kattis/blob/master/exploding_batteries.py
int get_min(const int &n){

    return  (int) std::ceil ( (std::sqrt( 1 + 8*n ) - 1)  / 2.0) ;
}

int main(){

    int n = 1;
    std::cin >> n;

    while( n ){
        std::cout << get_min( n-1 ) << std::endl;
        std::cin >> n;
    }

    return 0; 

}