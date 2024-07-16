/* Напишите калькулятор для расчёта полной стоимости товара. Она рассчитывается так: стоимость товара + стоимость доставки – скидка. Все значения сохраните в переменные и
    выводите в нужных местах, имитируя ввод данных (речь про cout).*/

#include <iostream>

int main() {
  int costProduct;
  std::cout << "Стоимость товара: ";
  std::cin  >> costProduct;                                         // Стоимость товара: 3000
  int costDelivery;                                                 // Стоимость доставки: 1000
  std::cout << "Стоимость доставки: ";                              // Скидка: 500
  std::cin >> costDelivery;                                         // Итого: 3500
  int discount;
  std::cout << "Скидка: ";
  std::cin >> discount; 

  int result = costProduct + costDelivery - discount; 
  
   
  std::cout << "Итого: " << result << "\n"; 
}