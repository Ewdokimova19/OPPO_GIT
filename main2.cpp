#include <iostream>

// Функция для быстрого возведения дробного числа в целую положительную степень
double my_pow(double base, unsigned int exponent) {
    double result = 1.0;

    while (exponent > 0) {
        if (exponent % 2 == 1) { // Если степень нечетная
            result *= base; // Умножаем результат на основание
        }
        base *= base; // Умножаем основание само на себя
        exponent /= 2; // Делим степень на 2
    }
    
    return result; // Возвращаем итоговый результат
}

int main() {
    double base;
    unsigned int exponent;

    // Ввод числа и степени
    std::cout << "Введите дробное число: ";
    std::cin >> base;
    std::cout << "Введите целую положительную степень: ";
    std::cin >> exponent;

    // Вычисление и вывод результата
    double result = my_pow(base, exponent);
    std::cout << base << " в степени " << exponent << " равно " << result << std::endl;

    return 0;
}
