#include <iostream>

using namespace std;

int main(){

    int n,m;

    cin >> n >> m;

    cout << ((min(n,m)%2==0)?"Malvika":"Akshat") << endl;

    return 0;
}