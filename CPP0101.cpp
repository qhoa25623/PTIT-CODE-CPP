#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll result=1ll*n*(n+1)/2;
        cout<<result<<endl;
    }
    return 0;
}