#include <iostream>
using namespace std;

int main(){
    int h, m;
    
    cin >> h >> m;
    
    while(h<0 || h>23){
        cin >> h;
    }
    
    while(m<0 || m>59){
        cin >> m;
    }
    
    if(m < 45){
        if(h == 0){
            h = 23;
        }
        else{
            h--;
        }
        m = 60+(m-45);
    }
    else{
        m = m-45;
    }
    
    cout << h << " " << m << endl;
    
    return 0;
}
