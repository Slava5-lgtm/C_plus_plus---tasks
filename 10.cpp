/* Теперь вернемся к программе с расчетом стоимости товара. Измените ее так, чтобы пользователь мог вводить свои данные.

Переменные для хранения цены, стоимости доставки и скидки у нас уже есть, вам нужно дописать код, который будет записывать в них введенные пользователем числа. Не забудьте
добавить подсказки, чтобы было понятно, что нужно вводить.

```
int main() {
int productCost = 6400;
int deliveryCost = 350;
int discount = 700;

int price = productCost + deliveryCost - discount;

std::cout << "Стоимость товара: " << productCost << "\n";
std::cout << "Cтоимость доставки: " << deliveryCost << "\n";
std::cout << "Скидка: " << discount << "\n";
std::cout << "---------\n";
std::cout << "Итого: " << price << "\n";
} */

#include <iostream>

int main() {
    std::cout << "Расчетом стоимости товара !\n";

    int productCost;                                                    // Стоимость товара
    int deliveryCost;                                                   // Стоимость доставки
    int discount;                                                       // Скидка


    std::cout << "Введи стоимость товара: ";                                               
    std::cin >> productCost;

    std::cout << "Введи стоимость доставки: ";                                               
    std::cin >> deliveryCost;

    std::cout << "Какая скидка на даный товар: ";                                               
    std::cin >> discount;
        
    int price = productCost + deliveryCost - discount;
    std::cout << "Итого: " << price << "\n";
}