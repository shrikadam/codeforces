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

    int n;

    cin >> n;

    int* c = new int[n];

    for(int i=0; i<n; i++){
        cin >> c[i];
    }

    arrsort(n, c);

    for(int i=0; i<n; i++){
        cout << c[i] << " ";
    }

    delete [] c;

    return 0;
}