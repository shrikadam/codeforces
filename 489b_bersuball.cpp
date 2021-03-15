#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n,m,a[100],b[100];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(abs(a[i]-b[j])<2){
                count++;
                b[j] = 1000;
                break;
            }
        }
    }

    cout << count << "\n";

    return 0;

}