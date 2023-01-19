#include <bits/stdc++.h>
using namespace std;

int a[1000001];
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        set<int>se(a,a+n);
        set<int>::iterator it=se.end();
        --it;
        cout<<*it<<endl;
    }
    return 0;
}