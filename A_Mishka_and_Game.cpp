#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mish = 0;
    int chris = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a < b)
        {
            chris++;
        }
        else if (a > b)
        {
            mish++;
        }
    }
    if (mish == chris)
    {
        cout << "Friendship is magic!^^" << endl;
    }
    else if (mish > chris)
    {
        cout << "Mishka" << endl;
    }
    else
    {
        cout << "Chris" << endl;
    }
}