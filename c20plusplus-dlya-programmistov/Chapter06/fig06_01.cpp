// инициализация массива и вывод на экран
#include <format>
#include <iostream>
#include <array>

int main() {
    std::array<int, 5>; // values - это массив из 5 чисел

    // Инициализируем все элементымассива нулями
    for (size_t i{0}; i < values.size(); ++i) {
        values[i] = 0;
    }

    std::cout << std::format("{:>7}{:10}\n", "Element", "Values");

    // Выводим значения всех элементов массива
    for (size_t{0}; i < values.size(); ++i) {
        std::cout << std::format("{:>7}{:>10}\n", i, values[i]);
    }

    std::cout << std::format("\n{:>7}{:>10}\n", "Element", "Value");

    // Обращаемся к элементам через функцию at
    for (size_t i{0}; i < values.size(); ++i) {
        std::cout << std::format("{:>7}{:>10}\n", i, values.at(i));
    }

    // Пробуем обратиться к несуществующему элементу
    values.at(10);

    return 0;

}