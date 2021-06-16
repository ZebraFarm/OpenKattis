#include <iostream>
#include <string>
#include <deque>

typedef long long ll;
std::deque<ll> A;
std::deque<ll> B;

int balance(){
    //Compare A & B;
    while ( B.size() > A.size() ) {
        A.push_back( B.front() );
        B.pop_front();
    }

    while ( A.size() - B.size() > 1 ) {
        B.push_front( A.back() );
        A.pop_back();
    }

    return 0;
}

int ins_middle( ll &val ){

    balance();
    if ( A.size() == B.size() ){
        A.push_back(val);
    } else {
        B.push_front(val);
    }

    return 0;
}

ll get( ll &idx){
    if (idx < A.size() ){
        std::cout << A.at(idx) << std::endl;
    } else {
        std::cout << B.at(idx - A.size() ) << std::endl;
    }
    return 0;
}

int main(){

    std::ios_base::sync_with_stdio(false); 
    std::cin.tie(NULL);

    ll n; std::cin >> n;
    ll count = 0;

    std::string task;
    ll val;
    while (n--){

        std::cin >> task >> val;
        
        if (task == "push_front") {
            A.push_front( val );
        } else if (task == "push_back") {
            B.push_back( val );
        } else if (task == "push_middle") {
            ins_middle( val );
        } else if (task == "get") {
            get( val );
        }
    }
    return 0;
}