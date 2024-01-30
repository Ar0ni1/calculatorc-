#include <iostream>
#include <cmath>
#include <locale>

double add(double a, double b) {
    return a + b;
}
double subtract(double a, double b) {
    return a - b;
}
double multiply(double a, double b) {
    return a * b;
}
double divide(double a, double b) {
    return a / b;
}
double power(double base, double exponent) {
    return std::pow(base, exponent);
}
double squareRoot(double num) {
    return std::sqrt(num);
}
double calculatePercentage(double number) {
    return number / 100;
}
unsigned long long factorial(unsigned int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    int choice;

    do {
        std::cout << "Выберите операцию:\n";
        std::cout << "1. Сложение\n";
        std::cout << "2. Вычитание\n";
        std::cout << "3. Умножение\n";
        std::cout << "4. Деление\n";
        std::cout << "5. Возведение в степень\n";
        std::cout << "6. Нахождение квадратного корня\n";
        std::cout << "7. Нахождение 1 процента от числа\n";
        std::cout << "8. Найти факториал числа\n";
        std::cout << "9. Выйти из программы\n";
        std::cout << "Выбор: ";
        std::cin >> choice;

        if (choice >= 1 && choice <= 8) {
            double num1, num2;
            std::cout << "Введите два числа: ";
            std::cin >> num1 >> num2;

            switch (choice) {
            case 1:
                std::cout << "Результат: " << add(num1, num2) << std::endl;
                break;
            case 2:
                std::cout << "Результат: " << subtract(num1, num2) << std::endl;
                break;
            case 3:
                std::cout << "Результат: " << multiply(num1, num2) << std::endl;
                break;
            case 4:
                std::cout << "Результат: " << divide(num1, num2) << std::endl;
                break;
            case 5:
                std::cout << "Результат: " << power(num1, num2) << std::endl;
                break;
            case 6:
                std::cout << "Результат: " << squareRoot(num1) << std::endl;
                break;
            case 7:
                std::cout << "Результат: " << calculatePercentage(num1) << std::endl;
                break;
            case 8:
                std::cout << "Результат: " << factorial(static_cast<unsigned int>(num1)) << std::endl;
                break;
            }
        }
        else if (choice != 9) {
            std::cout << "Неверный выбор операции. Попробуйте снова.\n";
        }
    } while (choice != 9);

    std::cout << "Программа завершена.\n";

    return 0;
}
