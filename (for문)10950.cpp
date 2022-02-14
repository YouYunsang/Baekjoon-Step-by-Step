#include <iostream>
using namespace std;

int main(){
    int a,b,t;
    
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> a >> b;
    
        while(a<=0 || a>=10){
            cin >> a;
        }
        while(b<=0 || b>=10){
            cin >> b;
        }
        
        cout << a+b << endl;
    }
    
    return 0;
}
