#include <iostream>

using namespace std;

int main(){

    string one, two;

    cin >> one >> two;

    int sum1 = 0;
    int sum2 = 0;

    for(int i=0; i<one.length();i++){
        char c1 = one[i];
        char c2 = two[i];
        sum1 += (c1>96)?(c1-32):c1;
        sum2 += (c2>96)?(c2-32):c2;
        if(sum1!=sum2){
            cout << ((sum1>sum2)?"1":"-1") << endl;
            return 0;
        }
    }

    cout << "0" << endl;


    return 0;
}