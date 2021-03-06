#include <iostream>
#include <set>

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
        int n, a;
        cin >> n;
        set<int> s;
        int maxcount = 0;
        int p[200005] = {0};
        for(int i=0; i<n; i++){
            cin >> a;
            s.insert(a);
            p[a]++;
            if(p[a]>maxcount){
                maxcount = p[a];
            }
        }
        int uniques = s.size();
        int ans;
        if(n==1){
            ans = 0;
        }
        else if(uniques!=maxcount){
            ans = min(uniques, maxcount);
        }
        else{
            ans = s.size()-1;
        }
        cout << ans << endl;
    }

    return 0;

}