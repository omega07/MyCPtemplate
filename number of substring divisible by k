/*                                 ___ _____ 
  ___  _ __ ___   ___  __ _  __ _ / _ \___  |
 / _ \| '_ ` _ \ / _ \/ _` |/ _` | | | | / / 
| (_) | | | | | |  __/ (_| | (_| | |_| |/ /  
 \___/|_| |_| |_|\___|\__, |\__,_|\___//_/   
                      |___/            
*/

//https://discord.com/channels/719165954013265971/719829947996176457/720322940771762188
// Getting better at it ! ! !
#include <bits/stdc++.h>
#include <string.h>
#define int long long
#define MAX (int)(1e7+5)
#define MAX2D (int)(1e3+5)
#define itn int
#define inf 5e18
#define MOD (int)(1e9 + 7)
#define pb push_back
#define mk make_pair
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(),x.rend()
#define sitr set<int>::iterator
#define mitr map<int, int>::iterator
#define pii pair<int, int>
#define vii vector<pii>
#define vi vector<int>
#define vll vector<unsigned int>
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define fast                       \
    ios_base ::sync_with_stdio(0); \
    cin.tie(NULL);                 \
    cout.tie(NULL)
using namespace std;

// Given a string find the count of all the substrings which are divisible by a number k
// (k is coprime with 10).
// Idea : A substring is suffix[j]-suffix[i].
// eg. 32184718 -> 84 is a substring and it is actually .. 84718 - 718 = 84000.
// Here if the number x is divisible by k, then the number x*10, x*100, x*1000, ... are also
// divisible by k. Unless the number is a multiple of 2 or 5 i.e gcd(k,10) != 1 .. if gcd(k,10) != 1
// then the divisibility might get affected on how many 0s we add, eg. 3 is not divisible by 2 but 30 is.
// Hence for the method gcd(k,10) has to be 1.
// therefore if we have some suff[j]%k == x, and there is another value suff[i]%k == x then we can subtrct
// these 2 to get suff[i]-suff[j]%k = 0. so if we have g values such that suff[i]%k == x
// then the answer is gC2.

signed main()
{
    fast;
    string s;
    cin>>s;
    int k = 2019;
    map<int,int> mp;
    int power = 1, val = 0;
    int n = s.size();
    mp[0]++;
    int ans = 0;
    for(int i=n-1;i>=0;i--) {
        // here we calc suff .. 
        val = (val + ((s[i]-'0')*power))%k;
        power = (power*10)%k;
        mp[val]++;
    }
    for(auto i : mp) {
        int g = i.second;
        ans += (g*(g-1))/2;
        //cout<<g<<" ";         
    }
    cout<<ans;
    return 0;
}


/*
max factors number = 720720 --> 240 factors
max factors number = 1441440 -->288 factors

Beautiful program
Please run for me.
I've tried you in BASIC,
FORTRAN and C.
Beautiful program,
You've errors galore.
And each time I run you,
You're swapped out of core.
*/
