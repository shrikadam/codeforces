#include <iostream>

using namespace std;

int main(){

    long long int n, k, mid;

    cin >> n >> k;

    mid = 1+(n-1)/2;

    cout << ((k>mid)?2*(k-mid):2*k-1) << endl;

    return 0;
}