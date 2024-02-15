#include<bits/stdc++.h>

using namespace std;

#define ll long long

bool is_square(ll x) {
    ll l = 1, r = 1e9;
    while(l <= r) {
        ll mid = l + (r - l) / 2;
        if(mid * mid == x) return true;
        if(mid * mid > x) r = mid - 1;
        else l = mid + 1;
    }      
    return false;  
}
void solve(){
    ll n,a;
    ll suma=0;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a;
        suma+=a; 
    }

    if(is_square(suma)) cout << "yes\n";
    else cout << "no\n";

}

int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        solve();
    }
}
