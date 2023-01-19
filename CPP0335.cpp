#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore(1);
    while(t--){
        string s;
        getline(cin,s);
        int res=INT_MIN;
        int tmp=0;
        for(int i=0;i<s.length();i++){
            if(isdigit(s[i])){
                tmp=tmp*10 + (s[i]-'0');
            }else{
                res=max(res,tmp);
                tmp=0;
            }
        }
        if(tmp!=0){
            res=max(res,tmp);
        }
        cout<<res<<endl;
    }
    return 0;
}