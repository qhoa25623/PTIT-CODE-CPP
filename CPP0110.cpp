#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore(1);
    while(t--){
        string s;
        getline(cin,s);
        int pos=s.find("084");
        string t=s.erase(pos,3);
        cout<<t<<endl;
    }
}