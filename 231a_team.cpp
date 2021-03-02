#include <iostream>

using namespace std;

int main(){

    int n,a,b,c;
    
    cin >> n;

    int count = 0;

    for(int i=0; i<n; i++){
        int solve = 0;
        cin >> a >> b >> c;
        if(a+b+c>1)    solve = 1;
        count += solve;  
    }

    cout << count << endl;
    
    //system("pause");

    return 0;
}