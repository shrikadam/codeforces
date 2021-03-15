#include <iostream>

using namespace std;

int findloc(int* c, int l, int r, int q){
    int mid = (l+r+1)/2;
    if(r>=l){
        if(q<=c[mid] && q>c[mid-1]){
            return mid;
        }
        else if(q<c[mid]){
            return findloc(c, l, mid-1, q);
        }
        else{
            return findloc(c, mid+1, r, q);
        }
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n, a,c[100005]={0}, m, q, loc;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        c[i+1] = c[i]+a;
    }
    cin >> m;
    while(m--){
        cin >> q;
        loc = findloc(c,0,n,q);
        cout << loc << "\n";
    }

    return 0;

}