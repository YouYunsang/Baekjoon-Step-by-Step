#include <iostream>
using namespace std;

int main(){
    int nArray[10], mArray[10];
    int count[42] = {};
    int c = 0;
    
    for(int i = 0; i < 10; i++){
        cin >> nArray[i];
        while(nArray[i] < 0 || nArray[i] > 1000){
            cin >> nArray[i];
        }
    }
    
    for(int i = 0; i < 10; i++){
        mArray[i] = nArray[i] % 42;
        count[mArray[i]]++;
    }
    
    for(int i = 0; i < 42; i++){
        if(count[i] != 0){
            c++;
        }
    }
    
    cout << c;
    
    return 0;
}
