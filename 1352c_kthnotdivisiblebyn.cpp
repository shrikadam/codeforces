#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        cout << n*(k/(n-1)) + ((k%(n-1))?k%(n-1):-1) << "\n";
    }

    return 0;

}