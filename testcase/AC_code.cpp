#include<bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
signed main() {
  	//fastio;
    int n, k; cin>>n>>k;
    vector<int> arr(n);
    for(auto &x : arr) cin>>x;
    set<int> myset;
    vector<int> cnt(k+1, 0);
    for(int i=0;i<=k;i++) myset.emplace(i);
    for(int i=0;i<n;i++) {
      	if((arr[i] < k)) {
        	if(cnt[arr[i]] == 0) myset.erase(arr[i]);
        	cnt[arr[i]]++;
        }
      	if((i>=k) && (arr[i-k] < k)) {
            cnt[arr[i-k]]--;
            if(cnt[arr[i-k]] == 0) myset.emplace(arr[i-k]);
        }
        if(i>=k-1) cout<<*myset.lower_bound(0)<<' ';
    }
}

