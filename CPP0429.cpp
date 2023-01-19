#include <bits/stdc++.h>
using namespace std;

int a[1000001];
int main()
{
    int n, k, b;
    cin >> n >> k >> b;
    for (int i = 0; i < b; i++)
    {
        cin >> a[i];
    }
    cout << k - b << endl;
}