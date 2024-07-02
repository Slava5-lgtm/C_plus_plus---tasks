#include <iostream>

int main() {
  std::cout << "Сколько стоит товар?\n";
  int productCost;
  std::cin >> productCost;
  
  std::cout << "Какая стоимость доставки?\n";
  int deliveryCost;
  std::cin >> deliveryCost;

  std::cout << "Сколько скидка?\n";
  int discount;
  std::cin >> discount;

  int price = productCost + deliveryCost - discount;

std::cout << "Стоимость товара: " << productCost << "\n";
std::cout << "Cтоимость доставки: " << deliveryCost << "\n";
std::cout << "Скидка: " << discount << "\n";
std::cout << "---------\n";
std::cout << "Итого: " << price << "\n";
}