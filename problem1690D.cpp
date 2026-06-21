#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;

    string s;
    cin>>s;

    int count=0;

    for(int i=0;i<m;i++){
        if(s[i]=='W') count++;
    }

    int mount=count;

    for(int i=m;i<n;i++){
        if(s[i]=='W') count++;
        if(s[i-m]=='W') count--;

        mount=min(mount,count);
    }

    cout<<mount<<"\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        solve();
    }

    return 0;
}