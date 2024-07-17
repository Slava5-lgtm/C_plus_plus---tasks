/* Напишите калькулятор для расчёта полной стоимости товара. Она рассчитывается так: стоимость товара + стоимость доставки – скидки */


#include <iostream>

int main() {
  int productCost; // Стоимость товара
  std::cout << "Введите стоимость товара: ";
  std::cin  >> productCost;
  int deliveryCost;
  std::cout << "Введите стоимость доставки: ";
  std::cin >> deliveryCost; // Стоимость доставки
  int discount;
  std::cout << "Скидка: ";
  std::cin >> discount; // Скидки 


    /* Если цена товара превышает 10000 то дается 50% скидка на доставку будем проверять превышает цена 10000
        Это решаеться при помоши условной конструкции
        if - если какоето условия выполняеться тогда будем что то делать
            if (условия){
                 обычный код
                }*/


  if (productCost > 10000) {  // это блок кода
    deliveryCost /=2;
                // подсказка пользувателю должна быть в скобках
  std::cout << "Стоимость товара товара превышает 10000 рублей.\n";
  std::cout << "Поэтому вы получаете скидку на доставку!\n";
  }



  int price = productCost + deliveryCost - discount; 
  
   
  std::cout << "Полная стоимость товара: " << price << "\n"; 
}