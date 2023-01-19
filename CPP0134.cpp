#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int ptich(int n, int k)
{
    int cnt = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                cnt++;
                if (cnt == k)
                {
                    return i;
                }
                n /= i;
            }
        }
    }
    if (n != 1)
    {
        cnt++;
        if (cnt == k)
            return n;
    }
    return -1;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        cout << ptich(n, k) << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int ptich(int n, int k)
// {
//     int cnt = 0;
//     for (int i = 2; i <= sqrt(n); i++)
//     {
//         if (n % i == 0)
//         {
//             while (n % i == 0)
//             {
//                 cnt++;
//                 if (cnt == k)
//                 {
//                     return i;
//                 }
//                 n /= i;
//             }
//         }
//     }
//     if (n != 1)
//     {
//         cnt++;
//         if (cnt == k)
//         {
//             return n;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;
//         cout << ptich(n, k) << endl;
//     }
//     return 0;
// }