#include <iostream>

using namespace std;

#define loop(a, b) for(int a=0; a<b; a++)

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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    return 0;

}