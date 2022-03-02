#include <iostream>
using namespace std;

int main(){
    int a, b, c, res;
    int count[10] = {};
    
    cin >> a >> b >> c;
    
    while(a < 0){
        cin >> a;
    }
    while(b < 0){
        cin >> b;
    }
    while(c < 0){
        cin >> c;
    }
    
    res = a * b * c;
    
    while(res != 0){
        count[res%10]++;
        res = res/10;
    }
    
    for(int i = 0; i < 10; i++){
        cout << count[i] << endl;
    }
  
  return 0;
}
