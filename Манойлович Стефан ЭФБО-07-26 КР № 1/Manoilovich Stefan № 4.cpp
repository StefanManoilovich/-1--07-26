#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    cout << "Введите a, b, c: ";
    cin >> a >> b >> c;

    char symbol;
    cout << "Введите символ (N, g или z): ";
    cin >> symbol;

    if (symbol == 'N') {
        cout << "Stefan\n";
    } 
    else if (symbol == 'g') {
        if (a == 0) {
            if (b == 0) {
                if (c == 0) cout << "Корней бесконечно много\n";
                else cout << "Корней нет\n";
            } else {
                cout << "Корень: " << -c / b << "\n";
            }
        } else {
            double D = b * b - 4 * a * c;
            if (D < 0) {
                cout << "Корней нет\n";
            } else if (D == 0) {
                cout << "Корень: " << -b / (2 * a) << "\n";
            } else {
                cout << "x1 = " << (-b + sqrt(D)) / (2 * a) << "\n";
                cout << "x2 = " << (-b - sqrt(D)) / (2 * a) << "\n";
            }
        }
    } 
    else if (symbol == 'z') {
        double temp;
        cout << "Введите температуру в Цельсиях: ";
        cin >> temp;
        
        cout << "В Фаренгейтах: " << temp * 1.8 + 32 << "\n";
    } 
    else {
        cout << "Неизвестный символ\n";
    }

    return 0;
}