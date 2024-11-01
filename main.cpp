#include <iostream>

// Функция для возведения дробного числа в целую положительную степень
double my_pow(double base, unsigned int exponent) {
    double result = 1.0; // Начальное значение результата

    for (unsigned int i = 0; i < exponent; ++i) {
        result *= base; // Умножаем результат на основание exponent раз
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
