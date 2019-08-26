#include <iostream>

using namespace std;


int main(){
    
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 

    int a,b,c,d,e,dist;

    cin >> a >> b >> c >> d >> e;
    dist = abs(a-c);
    dist += abs(b-d);

    e -= dist;

    if(e < 0)
        cout << "N\n";
    else
        e & 1 ? cout << "N\n" : cout << "Y\n";


}

