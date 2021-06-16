#include <iostream>
#include <vector>

typedef long long ll;

int main(){

    std::ios_base::sync_with_stdio(false); 
    std::cin.tie(NULL);

    int n; std::cin >> n;
    int h; std::cin >> h;

    //thinking this could be a tree instead (sorted)/ heap
    std::vector<ll> upper(h,0);
    std::vector<ll> lower(h,0);

    n = n/2;
    ll tmp;
    while( n-- ){
       std::cin >> tmp;
       lower[ tmp-1 ]++; 

       std::cin >> tmp;
       upper[ (h - 1) - (tmp - 1) ]++; 
    }

    std::vector<ll> minimum(h,0);
    ll up = 0;
    ll btm = 0;

    //from top to bottom
    for (int i = h-1; i >= 0; --i){
        if (lower[i]){
            btm += lower[i];
        }

        minimum[i] += btm;
    }

    //from bottom to top
    for (int i = 0; i < h; ++i){
        if (upper[i]){
            up += upper[i];
        }
        minimum[i] += up;
    }


    int rows = 0;
    int hits = 500001;

    for (int hit : minimum){
        if (hit == hits){
            rows++;
        } else if (hit < hits){
            rows = 1;
            hits = hit;
        }
    }

    std::cout << hits << " " << rows << std::endl;

    return 0;
}