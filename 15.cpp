/* Напишите программу, которая вычисляет модуль числа. */

#include <iostream>

int main() {
  int x;
  std::cout << "Введите число: ";
  std::cin >> x;

  if (x < 0) {
    x = -x;
  }

  std::cout << "Модуль числа: " << x;
}