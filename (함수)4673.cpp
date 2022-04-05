#include <iostream>
using namespace std;

int kaprekar(int a){
    int result = a;
    
    while(a > 0){
        result += a % 10;
        
        a = a / 10;
    }
    
    return result;
}

int main(){
    int arr_num[10001] = {0,};
    
    for(int i = 0; i < 10001; i++){
        int num = kaprekar(i);
        
        if(num <= 10000){
            arr_num[num] = 1;
        }
    }
    
    for(int i = 0; i < 10001; i++){
        if(arr_num[i] != 1){
            cout << i << endl;
        }
    }
    
    return 0;
}
