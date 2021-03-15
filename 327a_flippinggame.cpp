#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n, ones=0, zeros=0, a, zeroschain=-1;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        if(a!=0){
            ones++;
            if(zeros>0){
                zeros--;
            }
        }
        else{
            zeros++;
            zeroschain = max(zeros,zeroschain);
        }
    }
    cout << ones+zeroschain << "\n";

    return 0;

}