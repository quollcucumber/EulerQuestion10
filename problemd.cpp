#include <bits/stdc++.h>
using  namespace std;
#define int long long
set<int> factors(int num) {
    set<int> s;
    for(int i = 1; i<= num ; i++) {
        if(num % i == 0) s.insert(i);
    }
    return s;
}
signed main() {
    int num = pow(2, 7) * pow(3, 5) * pow(5, 4);
    set<int> s = factors(num);
    int total = 0;
    // go through all factors of num, and see what other edges it touches;
    for(int i : s) {
        for(int j : s) {
            if(j > i && j % i == 0) {
                total++;
            }
        }
    }
    cout<<total<<'\n';
}
