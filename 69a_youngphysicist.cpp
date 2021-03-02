#include <iostream>

using namespace std;

int main(){

    int n;

    cin >> n;

    int sumx = 0;
    int sumy = 0;
    int sumz = 0;

    while(n--){
        int a, b, c;
        cin >> a >> b >> c;
        sumx += a;
        sumy += b;
        sumz += c;
    }

    bool check = (sumx==0 && sumy==0 && sumz==0);

    cout << ((check)?"YES":"NO") << endl;

    return 0;
}