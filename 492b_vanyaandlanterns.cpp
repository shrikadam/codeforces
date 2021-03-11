#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n, l;
    cin >> n >> l;
    int a[1000];
    for(int i=0; i<n; ++i){
        cin >> a[i];
    }
    sort(a, a+n);
    double maxd = a[0] - 0;
    for(int i=1; i<n; i++){
        maxd = max(maxd, (a[i]-a[i-1])/2.);
    }
    maxd = max(maxd, (double)(l-a[n-1]));

    cout << setprecision(20) << maxd << endl;

    return 0;

}