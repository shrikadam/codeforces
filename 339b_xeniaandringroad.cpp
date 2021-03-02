#include <iostream>

using namespace std;

int main(){

    int n, m; 

    cin >> n >> m;

    int nextpos, pos=1;
    long long steps = 0;

    while(m--){
        cin >> nextpos;
        int diff = nextpos-pos;
        steps += (diff>=0)?diff:(n-abs(diff));
        pos = nextpos;
    }

    cout << steps;

    return 0;
}