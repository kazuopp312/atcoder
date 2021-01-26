#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using P = pair<int, int>;

int a() {
  int n;
  cin >> n;
  int ans = n % 1000;
  if(ans == 0 ) ans = 0;
  else ans = 1000 -ans;
  cout << ans << endl;
}

int b() {
  int n;
  cin >> n;
  int a[4] = {};
  string s;
  for(int i = 0;i < n;i++){
    cin >> s;
    if(s == "AC") a[0]++;
    else if(s == "WA") a[1]++;
    else if(s == "TLE") a[2]++;
    else a[3]++;
  }
  cout << "AC" << " x " << a[0] <<endl;
  cout << "WA" << " x " << a[1] <<endl;
  cout << "TLE" << " x " << a[2] <<endl;
  cout << "RE" << " x " << a[3] <<endl;
}