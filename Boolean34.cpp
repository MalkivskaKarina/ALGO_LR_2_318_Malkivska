#include <iostream>
using namespace std;

int main() 
{
    int x, y;
    cout << "Введіть координати поля (x y): ";
    cin >> x >> y;

    // Перевірка, чи поле є білим
    bool isWhite = (x + y) % 2 != 0;

    cout << "Поле є білим: " << boolalpha << isWhite << endl;

    return 0;
}
