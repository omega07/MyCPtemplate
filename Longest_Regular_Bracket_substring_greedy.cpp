#include <bits/stdc++.h>
#define pb push_back
#define all(x) x.begin(),x.end()
#define fast                       \
    ios_base ::sync_with_stdio(0); \
    cin.tie(NULL);                 \
    cout.tie(NULL)
using namespace std;

int main()
{
    fast;
    string s;
    cin>>s;
    int n = s.length();
    stack<int> vis;
    stack<char> stk;
    vis.push(-1);
    for(int i=0;i<n;i++) {
        if(s[i] == '(')
            stk.push('('), vis.push(i);
        else {
            if(!stk.empty() && stk.top() == '(') stk.pop(), vis.pop();
            else vis.push(i);
        }
    }
    vector<int> v;
    while(!vis.empty()) {
        v.pb(vis.top());
        vis.pop();
    }
    //for(int i=0;i<v.size()-1;i++) cout<<v[i]<<" ";
    int ans = 0;
    for(int i=0;i<v.size()-1;i++) {
        ans = max(ans,v[i]-v[i+1]-1);
    }
    cout<<ans;
    return 0; 
}
