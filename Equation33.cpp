#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() 
{
    double x;
    cout << "Введіть значення x: ";
    cin >> x;

    // Частина з e^(x + 0.5)
    double exponentPart = exp(x + 0.5);

    // Обчислення тангенса (кут в радіанах)
    double radians = (5 * x - 43) * M_PI / 180.0;
    double innerExpr = 3 * x - 2 * tan(radians);

    // Корінь з модуля виразу (√|3x - 2*tg(...)|)
    double sqrtPart = sqrt(abs(innerExpr));

    // Чисельник
    double numerator = 2 * exponentPart * sqrtPart;

    // Знаменник
    double xCubed = pow(x, 3);
    double sinSquared = pow(sin(xCubed), 2);
    double logBase5 = log(abs(xCubed)) / log(5);
    double denominator = cbrt(sinSquared * logBase5);

    // Перевірка ділення на нуль
    if (denominator == 0) {
        cout << "Помилка: ділення на нуль!" << endl;
        return 1;
    }

    double y = numerator / denominator;

    cout << fixed << setprecision(6);
    cout << "Результат: y = " << y << endl;

    return 0;
}
