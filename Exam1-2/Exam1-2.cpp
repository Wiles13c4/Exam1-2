#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "請輸入一個正整數 n: ";
    cin >> n;

    int sum1 = 0;
    cout << "\n使用 for 迴圈:" << endl;
    cout << "偶數有: ";
    for (int i = 0; i <= n; i += 2) {
        cout << i << " ";
        sum1 += i;
    }
    cout << "\n偶數和為: " << sum1 << endl;

    int sum2 = 0;
    int j = 0;
    cout << "\n使用 while 迴圈:" << endl;
    cout << "偶數有: ";
    while (j <= n) {
        cout << j << " ";
        sum2 += j;
        j += 2;
    }
    cout << "\n偶數和為: " << sum2 << endl;

    int sum3 = 0;
    int k = 0;
    cout << "\n使用 do-while 迴圈:" << endl;
    cout << "偶數有: ";
    do {
        cout << k << " ";
        sum3 += k;
        k += 2;
    } while (k <= n);
    cout << "\n偶數和為: " << sum3 << endl;

    return 0;
}
