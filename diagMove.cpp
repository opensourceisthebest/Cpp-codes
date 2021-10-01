#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string diagMove(int x,int y){
    ll sum = x + y;
    if(sum%2==0)
        return "YES";
    return "NO";
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll x, y;
        cin >> x >> y;
        cout << diagMove(x, y) << endl;
    }
    return 0;
}
