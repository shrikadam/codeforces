#include <iostream>

using namespace std;

int main(){

    int n;

    cin >> n;

    for(int i=0; i<n; i++){
        int m;
        cin >> m;
        int weightsum = 1;
        int weight = 1;
        for(int i=0; i<30; i++){
            weight *= 2;
            weightsum += weight;
            int rem = m%weightsum;
            if(rem==0){
                cout << m/weightsum << endl;
                break;
            }
        }
    }

    return 0;
}