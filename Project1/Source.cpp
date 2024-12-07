#include <iostream>
#include <iomanip>
#include <bitset>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    bitset<8> n = -1;
    for (int i = 0; i <= 4; ++i) {
        cout << (n >> i * 2 << i) << endl; //2 раза вправо и 1 раз влево
    }
}
