#include <bits/stdc++.h>
using namespace std;

int n;
int x[100];

void print()
{
    for (int i = 1; i <= n; i++)
    {
        cout << x[i];
    }
    cout << " ";
}
void Try(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        x[i] = j;
        if (i == n)
        {
            print();
        }
        else
        {
            Try(i + 1);
        }
    }
}
int main()
{
    cin >> n;
    Try(1);
    return 0;
}