#include <iostream>

using namespace std;

int main(){

    int l[] {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

    int n;

    cin >> n;

    for(int i:l){
        if(n%i==0){
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}