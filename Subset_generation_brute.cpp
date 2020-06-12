// generating all subsets using bitmasks
vector<string> v;
for(int i=0;i<(1<<len)-1;i++) {
  int j = i;
  string f = "";
  while(j) {
    f += (j%2 + '0');
    j /= 2;
  }
  while(f.length() < n) f += '0';
  reverse(all(f));
  v.pb(f);
}
