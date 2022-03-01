#include <iostream>
using namespace std;

int main() {
    int num, t, e_num, a, b;
    t = 0;

    cin >> num;

    if (num < 10 && num > 0) {
        t++;
        e_num = num * 11;

        while (num != e_num) {
            a = e_num % 10;
            e_num = (a + (e_num - a) / 10) % 10 + a * 10;
            t++;
        }

        cout << t;
    }
    else if (num >= 10 || num <= 99) {
        t++;
        b = num % 10;
        e_num = (b + (num - b) / 10) % 10 + b * 10;

        while (num != e_num) {
            a = e_num % 10;
            e_num = (a + (e_num - a) / 10) % 10 + a * 10;
            t++;
        }
        cout << t;
    }

    return 0;
}
