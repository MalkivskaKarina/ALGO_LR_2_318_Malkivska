#include <iostream>
using namespace std;

int main() 
{
    int number;
    cout << "Введіть тризначне число: ";
    cin >> number;

    // Отримуємо останню цифру (одиниці)
    int lastDigit = number % 10;

    // Отримуємо середню цифру (десятки)
    int middleDigit = (number / 10) % 10;

    // Виводимо спочатку останню, потім середню
    cout << "Остання цифра: " << lastDigit << endl;
    cout << "Середня цифра: " << middleDigit << endl;

    return 0;
}
