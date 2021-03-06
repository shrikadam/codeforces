#include <iostream>
#include <string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    string s;
    int a[100001], m, l, r;

    cin >> s >> m;

    a[1] = 0;
    for (int i = 1; i < s.length(); ++i)
    {
        if (s[i] == s[i-1]) a[i+1] = a[i] + 1;
        else    a[i+1] = a[i];
    }

    while (m--)
    {
        cin >> l >> r;;
        cout << a[r] - a[l] << endl;
    }
    return 0;

}