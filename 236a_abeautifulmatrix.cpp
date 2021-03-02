#include <iostream>

using namespace std;

int main(){

    int a[5][5];
    int posi, posj;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> a[i][j];
            if(a[i][j]==1){
                posi = i;
                posj = j;
            }
        }
    }

    cout << abs(2-posi)+abs(2-posj) << endl;

    return 0;
}
