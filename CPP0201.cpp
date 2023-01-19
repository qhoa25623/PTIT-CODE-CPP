#include <bits/stdc++.h>
using namespace std;

int a[1000001];
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int dis=1e9;
        for(int i=1;i<n;i++){
            int tmp=abs(a[i]-a[i-1]);
            dis=min(dis,tmp);
        }
        cout<<dis<<endl;
    }
    return 0;
}