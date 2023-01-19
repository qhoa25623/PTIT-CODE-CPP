#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    double sum = 0;
    for(int i=1;i<=n;i++){
         sum+=1.0*1/i;
    }
    cout<<fixed<<setprecision(4)<<sum;
    return 0;
}