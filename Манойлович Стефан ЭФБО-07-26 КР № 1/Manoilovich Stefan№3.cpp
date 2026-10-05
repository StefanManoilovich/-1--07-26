#include <iostream>
using namespace std;

int main() {
    // Объявляем переменные
    double x, y, c;

    // Ввод значений
    cout << "Введите x: ";
    cin >> x;

    cout << "Введите y: ";
    cin >> y;

    cout << "Введите c: ";
    cin >> c;

    // Упрощенное выражение:
    // c(3x + 5y) - y(5c - 2x) = x(3c + 2y)
    double result = x * (3 * c + 2 * y);

    // Вывод результата
    cout << "Результат: " << result << endl;

    return 0;
}