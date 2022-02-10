#include <iostream>
using namespace std;

int main() {

    int n, a, b;

    cin >> n;

    while (n < 1 || n > 100000) {
        cin >> n;
    }

    for (int i = 1; i <= n; i++) {
        cin >> a >> b;
        
        while (a <= 0 || a >= 10) {
            cin >> a;
        }

        while (b <= 0 || b >= 10) {
            cin >> b;
        }

        printf("Case #%d: %d\n", i, (a + b));
    }

    return 0;
}
