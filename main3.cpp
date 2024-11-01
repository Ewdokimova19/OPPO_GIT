#include <iostream>

// Функция для быстрого возведения дробного числа в целую степень (включая отрицательные)
double my_pow(double base, int exponent) {
    if (exponent == 0) {
        return 1.0; // любое число в степени 0 равно 1
    }

    double result = 1.0;
    unsigned int exp = (exponent > 0) ? exponent : -exponent; // берем абсолютное значение степени

    while (exp > 0) {
        if (exp % 2 == 1) { // Если степень нечетная
            result *= base; // Умножаем результат на основание
        }
        base *= base; // Умножаем основание само на себя
        exp /= 2; // Делим степень на 2
    }

    // Если степень отрицательная, берем обратное значение результата
    return (exponent > 0) ? result : 1.0 / result;
}

int main() {
    double base;
    int exponent; // Изменен тип на int для поддержки отрицательных степеней

    // Ввод числа и степени
    std::cout << "Введите дробное число: ";
    std::cin >> base;
    std::cout << "Введите целую степень (может быть отрицательной): ";
    std::cin >> exponent;

    // Вычисление и вывод результата
    double result = my_pow(base, exponent);
    std::cout << base << " в степени " << exponent << " равно " << result << std::endl;

    return 0;
}
