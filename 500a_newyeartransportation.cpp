#include <iostream>

using namespace std;

int main(){

    int n, t;

    cin >> n >> t;

    int next = 0;
    int i=0;

    while(i < n-1){
        int a;
        cin >> a;
        if(i==next) next += a;
        if(next==t-1){
            cout << "YES";
            return 0;
        }
        else if(next>t-1){
            cout << "NO";
            return 0;
        }
        i++;
    }

    return 0;
}