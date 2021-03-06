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

    int n, m, l, count=0; 
    int a[100005];
    int b[100005] = {0};
    set<int> s;
    cin >> n >> m;
    for(int i=0; i<n; ++i){
        cin >> a[i];
    }
    for(int i=n-1; i>=0; --i){
        s.insert(a[i]);
        b[i]=s.size();
    }
    while(m--){
        cin >> l;
        cout << b[l-1] << endl;
    }

    return 0;

}