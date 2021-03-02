#include <iostream>

using namespace std;

int main(){

    unsigned long long n, m, a, ans, adj=1;

    cin >> n >> m >> a;

    ans = (n/a+min(adj,n%a))*(m/a+min(adj,m%a));

    cout << ans << endl;

    return 0;
}