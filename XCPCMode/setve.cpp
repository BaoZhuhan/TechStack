#include <bits/stdc++.h>
using namespace std;

int prime[9999];
bool is_prime[100000050];

void get_prime(int n){
    int p = 0;
    for(int i = 0 ; i<= n ; i++ ){
        is_prime[i] = true;
    }
    is_prime[0] = is_prime[1] = false;
    for(int i = 2 ; i <= n ; i++) {
        if(is_prime[i] == true){
            prime[p++] = i;
            for(int j = i+ i ; j <= n ; j+= i ){
                is_prime[j] = false;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int n;
    cin >> n ;
    get_prime(n);
    int t ; 
    cin >> t;
    while(t--){
        int q ;
        cin >> q;
        cout << prime[q-1] << '\n';
    }
    return 0;
}