#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    if(a == b)
    {
        cout << "POLE KWADRATU " << a * a;
    }
    else
    {
        cout << "POLE PROSTOKATA " << a * b;
    }
    return 0;
}