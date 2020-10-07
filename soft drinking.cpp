#include<iostream>
using namespace std;

int main()
{
    int a,n, k, l, c, d, p, nl, np,tk,td,tp;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    tk=(k*l)/nl;
    td=(c*d);
    tp=p/np;
    a=min(td,tk);
    cout<<min(a,tp)/n;

}
