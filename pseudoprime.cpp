#include <iostream>
#include <vector>
#include <cmath>


using namespace std;

bool is_prime(int n){
    
    if(n == 2 || n == 3)
        return true;
    if(n < 2 || n%2 == 0 || n%3 == 0)
        return false;

    int r = int(sqrt(n)) + 1;
    int f = 5;
    while(f <= r){
        if(n%f == 0)
            return false;
        if(n%(f+2) == 0)
            return false;
        f +=6;
    }

    return true;
}

int main(){
    
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    long long p,a,ans;

    while(1){
        cin >> p >> a;
        if(!a && !p)
            break;


        ans = 1;
        long long power = p;
        long long base = a;
        //a^p %p

        //Fast Power Help from github user - mpfeifer1
        while(power > 0){

            if((power & 1) == 1)
                ans = (ans * base)%p;
            base = (base * base) % p;
            power /= 2;
        }

        ans %= p;

        if(ans == a && ! is_prime(p))
            cout << "yes\n";
        else
            cout << "no\n";
    }

}

