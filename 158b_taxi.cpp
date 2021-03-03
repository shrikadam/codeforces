#include <iostream>

using namespace std;

#define loop(a, b) for(int a=0; a<b; a++)

int main(){

    int n, ntaxi;

    cin >> n;

    int count[4] = {0};

    loop(i, n){
        int a;
        cin >> a;
        count[a-1]++;
    }

    int total = count[3] + count[2] + count[1]/2;
    count[0] -= count[2];
    if (count[1]%2==1)
    {
        total+=1;
        count[0]-=2;
    }
    if (count[0] > 0)
    {
        total += (count[0]+3)/4;
    }

    cout << total << endl;

    return 0;

}