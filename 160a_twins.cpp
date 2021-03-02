#include <iostream>

using namespace std;

void arrsort(int n, int* c){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(*(c+j)<*(c+i)){
                int t = *(c+i);
                *(c+i) = *(c+j);
                *(c+j) = t;
            }
        }
    }
}

int arrsum(int n, int* c){
    int sum = 0;
    for(int i=0; i<n; i++)  sum += c[i];

    return sum;
}

int main(){

    int n;

    cin >> n;

    int* c = new int[n];

    for(int i=0; i<n; i++){
        cin >> c[i];
    }

    arrsort(n,c);

    int count = 0;
    int coinsum = 0;
    int i = n-1;

    while(arrsum(n,c)/2>=coinsum){
        coinsum += c[i];
        count ++;
        i--;
    }

    cout << count << endl;

    delete [] c;

    return 0;
}