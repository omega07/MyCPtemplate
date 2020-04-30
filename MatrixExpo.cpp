#include <bits/stdc++.h>
#define int long long
#define MAX (1e7+5)
#define inf 4e18
#define MAX2D 1e3
#define MOD (int)(1e9 + 7)
#define pii pair<int, int>
#define pb push_back
#define all(x) x.begin(),x.end()
#define vii vector<pii>
#define vv vector<vector<int>>
#define vi vector<int>
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define raftaar                       \
    ios_base ::sync_with_stdio(0); \
    cin.tie(NULL);                 \
    cout.tie(NULL)
using namespace std;


void mul(vv &a, vv b, int n) {
    vv res(n,vi(n));
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
           res[i][j] = 0;
           for(int k=0;k<n;k++) {
               int g = a[i][k]*b[k][j] % MOD;
               (res[i][j] += a[i][k]*b[k][j] % MOD)%MOD;
           } 
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) a[i][j] = res[i][j]%MOD;
    }

    return;
} 

void MatrixExpo(vv &v, vv I, int n, int power) {
    if(power == 0) return;  
    
    while(power > 0) {
        if(power%2) mul(I,v,n), power--;
        else mul(v,v,n), power /= 2;
    }

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) v[i][j] = I[i][j];
    }
}

int32_t main() {
	raftaar;
    test {
        int n, power;
        cin>>n>>power;
        vv input(n,vi(n)), I(n,vi(n));
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                if(i == j) I[i][j] = 1;
            }
        }


        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) cin>>input[i][j];
        }
        
        MatrixExpo(input, I, n, power);
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) cout<<input[i][j]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
