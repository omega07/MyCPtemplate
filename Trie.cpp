#include <bits/stdc++.h>
#define int long long
using namespace std;

class Trie {
    public:
        char data;
        Trie *ptr[26];
        int word_end = 0;
    
    Trie() {
        for(int i=0;i<26;i++) ptr[i] = NULL;
    }

    Trie init() {
        Trie root;
        root.data = '_';
        root.word_end = -1;
        for(int i=0;i<26;i++) {
            root.ptr[i] = NULL;
        }
        return root;
    }

    void insert(string s) {
        Trie *where;
        where = this;
        int n = s.size();
        for(int i=0;i<n;i++) {
            if(where->ptr[s[i]-'a'] != NULL) {
                where = where->ptr[s[i]-'a'];
                if(i == n-1) where->word_end++;
            } else {
                where->ptr[s[i]-'a'] = new Trie;
                where = where->ptr[s[i]-'a'];
                where->data = s[i];
                if(i == n-1) where->word_end++;
                else where->word_end = 0;
            }
        }
    }

    bool search(string s) {
        int n = s.size();
        Trie *where;
        where = this;
        for(int i=0;i<n;i++) {
            if(where->ptr[s[i]-'a'] == NULL) return false;
            else {
                where = where->ptr[s[i]-'a'];
                if(i == n-1) {
                    return (where->word_end);
                }
            }
        }
        return true;
    }   

    void del(string s) {
        if(!search(s)) return;
        int n = s.size();
        Trie *where;
        where = this;
        for(int i=0;i<n;i++) {
            where = where->ptr[s[i]-'a'];
            if(i == n-1) (where->word_end)--;
        }
        return;
    }

};


signed main()
{
    Trie *R = new Trie;
    Trie r = R->init();
    return 0;   
}
