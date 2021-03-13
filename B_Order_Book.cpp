#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s;
    cin >> n >> s;
    map<int, int> sell;
    map<int, int> buy;

    for (int i = 0; i < n; i++)
    {
        char a;
        cin >> a;
        int p, v;
        cin >> p >> v;
        if (a == 'B')
        {
            buy[p] += v;
        }
        else
        {
            sell[p] += v;
        }
    }

    map<int, int>::reverse_iterator it;
    map<int, int>::iterator it1;
    if(s<sell.size()) {
        int x = s;
        map<int, int> ans;
        for (it1 = sell.begin(); x != 0; it1++, x--)
        {
            ans[it1->first] = it1->second;
        }
        for (it = ans.rbegin(); it != ans.rend(); it++) {
            cout << "S " << it->first << " " << it->second << endl;
        }
    }
    else {
        map<int, int> ans;
        for (it1 = sell.begin(); it1 != sell.end(); it1++)
        {
            ans[it1->first] = it1->second;
        }
        for (it = ans.rbegin(); it != ans.rend(); it++)
        {
            cout << "S " << it->first << " " << it->second << endl;
        }
    }
    if(s<buy.size()) {
        int x = s;
        for (it = buy.rbegin(); x!= 0; it++, x--)
        {
            cout << "B " << it->first << " " << it->second << endl;
        }
    }
    else {
        for (it = buy.rbegin(); it != buy.rend(); it++)
        {
            cout << "B " << it->first << " " << it->second << endl;
        }
    }
    
}