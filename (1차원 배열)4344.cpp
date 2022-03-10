#include <iostream>
using namespace std;

int main(){
    int c, n;
    double score[1000], average, percentage;
    
    cin >> c;
    
    for(int i = 0; i < c; i++){
        int count = 0;
        int score_sum = 0;
        cin >> n;
        
        while(n < 1 || n > 1000){
            cin >> n;
        }
        
        for(int j = 0; j < n; j++){
            cin >> score[j];
            
            while(score[j] < 0 || score[j] > 100){
                cin >> score[j];
            }
            score_sum += score[j];
        }
        
        average = score_sum / n;
        
        for(int k = 0; k < n; k++){
            if(score[k] > average){
                count++;
            }
        }
        //헤맨 부분 => count를 double로 바꾸기
        percentage = (double)count / n * 100;
        
        cout.precision(3);
        cout << fixed;
        cout << percentage << "%" << endl;
    }
    
    return 0;
}
