#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    // Вычисляем количество плит вдоль длины и ширины
    long long length = ceil((double)n / a);
    long long width = ceil((double)m / a);

    // Вычисляем общее количество плит
    long long total = length * width;

    cout << total << endl;

    return 0;
}
