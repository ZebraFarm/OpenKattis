//Lots of credit goes to a friend for this one... given upon request.

#include <bits/stdc++.h>
#include <iomanip>

using namespace std;


vector<vector<double>> arr;

double func(int r,double d, int n , double s , double k){
    if(d >= k){
      return 1;
    }
    if((r<(k-d)) || ((r+d)>n)){
      return 0;
    }
    if (arr[(int)r][(int)d] != 0)
    {
        return arr[(int)r][(int)d];
    }
    else{
      double val = (d/s)*func(r-1,d,n,s,k) + ((s-d)/s)*func(r-1,d+1,n,s,k);
      arr[(int)r][(int)d] = val;
      return val;
    }
}

int main(){

    int n;
    cin >> n;

    double s,k;
    cin >> s >> k;


    vector<double> temp(n,0.0);

    for(int i = 0; i<=n; i++){
		arr.emplace_back(temp);    	
    }

    double ans = func(n,0.0,n,s,k);

    cout << setprecision(10);
    cout << ans;
}