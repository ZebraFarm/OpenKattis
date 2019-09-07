#include <iostream>
#include <vector>
#include <cmath>


using namespace std;

vector<int> primes(int n){

    vector<int> prim;
    
    while(n%2 == 0){
        prim.push_back(2);
        n /= 2;
    }
    while(n%3 == 0){
        prim.push_back(3);
        n /= 3;
    }

    for(int i = 5; i <= sqrt(n)+1; i += 6){
        while(n%i == 0){
            prim.push_back(i);
            n /= i;
        }
        while(n%(i+2) == 0){
            prim.push_back((i+2));
            n /= (i+2);
        }
        if(n == 1)
            break;        
    }

    if(n != 1)
        prim.push_back(n);

    return prim;
}

int main(){
    
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int num;
    while(1){
        cin >> num;
        if(num == 4)
            break;

        int x = num;
        int count = 1;
        vector<int> prim = primes(x);

        while(prim.size() != 1){
            x = 0;
            for(auto i : prim)
                x += i;

            prim.clear();
            prim = primes(x);
            count++;
        }


        cout << x << " " << count << "\n";
    }    


}

