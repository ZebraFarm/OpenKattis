#include <iostream>
#include <vector>
#include <cmath>


using namespace std;

vector<bool> SieveOfEratosthenes(int n){ 

    vector<bool> prime(n+1,true); 

    for (int p=2; p*p<=n; p++) 
    { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true) 
        { 
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    }  
    return prime;
}


int main(){
    
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int n,q;
    cin >> n >> q;

    vector<bool> prime = SieveOfEratosthenes(n);
    prime[1] = false;
    prime[0] = false;

    int a = 0;
    for(int i = 2; i <= n; i++){
        if(prime[i])
            a++;
    }
    cout << a << "\n";

    int ask;
    while(q--){
        cin >> ask;
        prime[ask] ? cout << "1\n" : cout << "0\n";
    }

}

