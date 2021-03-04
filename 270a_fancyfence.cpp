#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        cout << ((360%(180-a)==0)?"YES":"NO") << endl;
    }

    return 0;
}