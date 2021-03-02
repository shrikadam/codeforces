#include <iostream>

using namespace std;

int main(){

    int n,x=0;

    cin >> n;

    while(n--){
        string op;
        cin >> op;
        x += (op[1]=='+')?1:-1;
    }

    cout << x;

    return 0;
}