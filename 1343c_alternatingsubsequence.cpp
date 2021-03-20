#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    while(t--){
        int n, len = 0, maxlen = 0;
        long long curr;
        cin >> n;
        cin >> curr;
        long long a, sum=0, maxsum=LLONG_MIN;
        for(int i=1; i<n; i++){
            cin >> a;
            if(curr*a > 0){
                curr = max(a, curr);
            }
            else{
                sum += curr;
                curr = a;
            }
        }
        sum += curr;
        cout << sum << "\n";
    }

    return 0;

}