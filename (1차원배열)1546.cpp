#include <iostream>
using namespace std;

int main(){
    int n, max_num;
    double score[1000], new_score[1000];
    double score_sum = 0;
    
    cin >> n;
    
    while(n > 1000){
        cin >> n;
    }
    
    cin >> score[0];
    while(score[0] > 100 || score[0] < 0){
        cin >> score[0];
    }
    max_num = score[0];
    
    for(int i = 1; i < n; i++){
        cin >> score[i];
        while(score[i] > 100 || score[i] < 0){
            cin >> score[i];
        }
        
        if(max_num < score[i]){
            max_num = score[i];
        }
    }
    
    for(int i = 0; i < n; i++){
        new_score[i] = score[i] / max_num * 100;
        score_sum += new_score[i];
    }
    
    cout << score_sum / n;
    
    return 0;
}
