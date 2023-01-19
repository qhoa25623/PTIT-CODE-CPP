#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, x;
    stack<int> stk;
    cin >> n >> x;
    stk.push(x);
    --n;
    while (n--)
    {
        cin >> x;
        if (!stk.empty() && (x + stk.top()) % 2 == 0)
        {
            stk.pop();
        }
        else
        {
            stk.push(x);
        }
    }
    cout << stk.size();
    return 0;
}