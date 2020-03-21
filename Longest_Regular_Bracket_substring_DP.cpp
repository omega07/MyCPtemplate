#include <bits/stdc++.h>
#define pb push_back
#define vi vector<int> 
#define all(x) x.begin(),x.end()
#define fast                       \
    ios_base ::sync_with_stdio(0); \
    cin.tie(NULL);                 \
    cout.tie(NULL)
using namespace std;

const int inf = 1e7;
int main()
{
    fast;
    string s;
    cin>>s;
    int n = s.length();
    vi seq(n,inf),extend(n,inf),freq(n+1,0);
    stack<int> st;
    for(int i=0;i<n;i++) {
        if(s[i] == '(') {
            st.push(i);
        }
        else {
            if(st.empty()) seq[i] = extend[i] = -1;
            else {
                seq[i] = extend[i] = st.top();
                st.pop();
            }

            if(extend[i] > 0 && seq[extend[i]-1] != -1 && seq[extend[i]-1] != inf) {
                extend[i] = extend[extend[i]-1];
            }

            if(extend[i] != -1 && extend[i] != inf){
               int len = i-extend[i]+1;
               freq[len]++;
            }
        }
    }
    //for(int i=0;i<n;i++) cout<<extend[i]<<" ";
    for(int i=n;i>=0;i--) {
        if(freq[i] != 0) {
            cout<<i<<" "<<freq[i];
            return 0;
        }
    }
    cout<<"0 1";
    return 0; 
}
