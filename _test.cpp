#include <iostream>
#include <vector>

using namespace std;

void printSubsets(int k, int n){
    if(k==n){
        return;
    }
    else{
        vector<int> subset;
        printSubsets(k+1,n);
        subset.push_back(k);
        printSubsets(k+1,n);
        subset.pop_back();
    }  
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n = 4;

    cout << "Recursion" << "\n";
    printSubsets(0,n);
    cout << "-----------------\n";
    cout << "Bit Masking" << "\n";
    for(int b=0; b<(1<<n); b++){
        vector<int> subset;
        for(int i=0; i<n; i++){
            if(b & (1<<i)){
                subset.push_back(i);
            }
        }
        for(auto j:subset){
            cout << j << " ";
        }
        cout << "\n";
    }


    return 0;

}