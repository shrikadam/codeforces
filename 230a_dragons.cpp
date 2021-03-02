#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(){

    int s, n;

    cin >> s >> n;

    int* power = new int[n];
    int* bonus = new int[n];

    for(int i=0; i<n; i++){
        cin >> power[i] >> bonus[i];
    }

    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(power[j]<power[i]){
                int t1 = power[i];
                power[i] = power[j];
                power[j] = t1;
                int t2 = bonus[i];
                bonus[i] = bonus[j];
                bonus[j] = t2;
            }
        }
    }

    for(int i=0; i<n; i++){
        if(s>power[i])  s += bonus[i];
        else{
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    delete [] power;
    delete [] bonus;

    return 0;
}