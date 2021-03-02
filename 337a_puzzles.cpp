#include <iostream>

using namespace std;

void arrsort(int n, int* c){
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(c[j]<c[i]){
                int temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
}

int main(){

    int n, m;

    cin >> n >> m;

    int* c = new int[m];

    for(int i=0; i<m; i++){
        cin >> c[i];
    }

    arrsort(m, c);
    
    int mindiff = c[m-1]-c[0];

    for(int i=0; i<m-n+1; i++){
        int diff = c[i+n-1]-c[i];
        if(diff<mindiff) mindiff=diff;
    }

    cout << mindiff << endl;

    delete [] c;

    return 0;
}