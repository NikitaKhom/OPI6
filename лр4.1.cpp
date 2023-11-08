
#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double m, n, x, s;
    cout << "Введіть загальну кількість людей: ";
    cin >> m;
    cout << "Введіть кількість людей в шерензі: ";
    cin >> n;
    x = int(m) / int(n);
    s = int(m) % int(n);
    cout << "s = " << s << endl;
    cout << "x = " << x << endl;
    system("pause");
    return 0;
}