#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t,a,b;
    
    cin >> t;
    
    while(t<0 || t>1000000){
        cin >> t;
    }
    
    for(int i = 0; i < t; i++){
        cin >> a >> b;
        while(a<1 || a>1000){
            cin >> a;
        }
        while(b<1 || b>1000){
            cin >> b;
        }
        
        cout << a+b << "\n";
    }
    
    return 0;
}
