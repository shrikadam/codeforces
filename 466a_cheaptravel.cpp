#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n, m, a, b, bn, rem;
    cin >> n >> m >> a >> b;
    if(m*a>b){
        cout << (n/m)*b+min((n%m)*a,b) << endl;
    }
    else{
        cout << a*n << endl;
    }
    

    return 0;

}