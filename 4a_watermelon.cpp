#include <iostream>

using namespace std;

int main(){

    int w;
    
    cin >> w;

    string result = (w>2&&w%2==0)?"YES":"NO";

    cout << result << endl;

    //system("pause");
    
    return 0;
}
