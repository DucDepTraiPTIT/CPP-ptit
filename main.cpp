#include<bits/stdc++.h>
using namespace std;
#define F(i, a, b) for(int i = a ; i < b;++i)
using ll = long long;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], ans = 0;
        F(i, 0, n) cin >> a[i];
        F(i, 0, n){
            int r = n - 1;
            while(r > i){
                if(a[r] >= a[i]){
                    ans = max(ans, r - i);
                    break;
                }
                --r;
            }
        }
        cout << ans << endl;
    }
}
