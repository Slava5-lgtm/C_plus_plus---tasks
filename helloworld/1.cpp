#include <iostream>

int main() {
  std::cout << "Сейчас мы поможем тебе вычислить квадрат !\n";
  int a;
  std::cout << "Введи число: ";
  std::cin >> a;

  int square = a * a;
  std::cout << "Вот он, квадрат твоего числа: " << square << "\n";
}
  