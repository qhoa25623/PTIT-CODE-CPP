#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        double a,b,c,d;
        cin>>a>>b>>c>>d;
        double distance=0;
        distance=(double)sqrt((double)pow((c-a),2)+(double)pow((d-b),2));
        cout<<fixed<<setprecision(4)<<distance<<endl;
    }
    return 0;
}