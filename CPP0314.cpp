#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore(1);
    set<string>se;
    while(t--){
        string s;
        getline(cin,s);
        se.insert(s);
    }
    cout<<se.size()<<endl;
    return 0;
}