#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n_array[1000000];
    
    int N = 0;
    
    while(N < 1 || N > 1000000){
        cin >> N;
    }
    
    for(int i = 0; i < N; i++){
        cin >> n_array[i];
        if(n_array[i] < -1000000 || n_array[i] > 1000000){
            cin >> n_array[i];
        }
    }
    sort(n_array, n_array+N);
    
    cout << n_array[0] << ' ' << n_array[N-1];
    
    return 0;
}
