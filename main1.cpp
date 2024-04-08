#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    string number = "";

    if (t == 10 && n > 1) {
        number = "1";
        n--;
    }

    if (number.empty()) {
        number = to_string(t);
        n--;
    }

    while (n--) {
        number += "0";
    }

    cout << number << endl;

    return 0;
}
