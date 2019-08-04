#include <iostream>

using namespace std;


int main(){
    
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int Cases;
    cin >> Cases;

    int a ,b,c;

    while(Cases--){
        cin >> a >> b >> c;

        if(a+b == c || a*b == c || a-b == c || b-a == c || (a % b == 0 && a/b == c) || (b % a == 0 &&  b/a == c) )
            cout << "Possible\n";
        else
            cout << "Impossible\n";
    }
}

