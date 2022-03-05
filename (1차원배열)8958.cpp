#include <iostream>
#include <string>
using namespace std;

int main() {
    int t_case;
    string str;

    cin >> t_case;

    for (int i = 0; i < t_case; i++) {
        cin >> str;
        int score_sum = 0;
        int score = 0;
        
        for (int j = 0; j < str.length(); j++) {
            if (str[j] == 'O') {
                score++;
                score_sum += score;
            }
            else if (str[j] == 'X') {
                score = 0;
            }
        }

        cout << score_sum << endl;
    }


    return 0;
}
