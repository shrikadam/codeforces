#include <iostream>

using namespace std;

#define loop(a, b) for(int a=0; a<b; a++)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n, checks=2;
    cin >> n;

    int a=0, b=0, c=0, in;
    
    loop(i,n) {cin >> in; a+=in;}
    loop(i,n-1) {cin >> in; b+=in;}
    loop(i,n-2) {cin >> in; c+=in;}

    cout << a-b << endl << b-c << endl;

    return 0;

}