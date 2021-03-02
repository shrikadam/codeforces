#include <iostream>

using namespace std;

int main(){

    int n, prev;

    cin >> n >> prev;

    int count = 1;
    int maxcount = 0;

    for(int i=1; i<n; i++){
        int next;
        cin >> next;
        if(next>=prev){
            count++;
        }   
        else{
            maxcount = max(maxcount,count);
            count = 1;
        }
        prev = next;
    }

    cout << max(count,maxcount) << endl;

    return 0;
}