#include <iostream>
#include <iomanip>
#include <bitset>
//add comm for teammate
// switch bitset in 8 to 32
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    bitset<32> n = -1;
    for (int i = 0; i <= 4; ++i) {
        cout << (n >> i * 2 << i) << endl; //2 ���� ������ � 1 ��� �����
    }
}
