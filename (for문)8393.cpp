#include <iostream>
using namespace std;

int main(){
    int n;
    int Nsum = 0;
    
    cin >> n;
    while(n<1 || n>10000){
        cin >> n;
    }
    
    for(int i = 1; i<=n; i++){
        Nsum += i;
    }
    cout << Nsum << endl;
    
    return 0;
}
