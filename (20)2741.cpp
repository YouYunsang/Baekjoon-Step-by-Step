#include <iostream>
using namespace std;

int main() {

    int n;

    cin >> n;

    while (n < 1 || n > 100000) {
        cin >> n;
    }

    for (int i = 1; i <= n; i++) {
        printf("%d\n", i);
    }

    return 0;
}
