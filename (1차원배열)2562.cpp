#include <iostream>
using namespace std;

int main(){
    int num_array[9], max_num, mn_index;
    
    cin >> num_array[0];
    while(num_array[0] < 0 || num_array[0] >= 100){
            cin >> num_array[0];
    }
    max_num = num_array[0];
    mn_index = 1;
    
    for(int i = 1; i < 9; i++){
        cin >> num_array[i];
        while(num_array[i] < 0 || num_array[i] >= 100){
            cin >> num_array[i];
        }
        if(max_num < num_array[i]){
            max_num = num_array[i];
            mn_index = i+1;
        }
    }
    
    cout << max_num << "\n" << mn_index;
    
    return 0;
}
