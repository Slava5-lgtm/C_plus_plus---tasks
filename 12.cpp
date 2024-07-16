/* Задача 1. Симулятор маршрутки
Что нужно сделать:
Напишите программу, которая симулирует работу маршрутки. Она умеет объявлять остановки и узнавать у пользователя, сколько человек вышло и зашло на остановке. Пассажиры
оплачивают проезд при входе. Работать она должна примерно так:

Прибываем на остановку «Улица программистов». В салоне пассажиров: 0
Сколько пассажиров вышло на остановке? 0
Сколько пассажиров зашло на остановке? 3
Отправляемся с остановки «Улица программистов». В салоне пассажиров: 3
-----------Едем---------
Прибываем на остановку «Проспект алгоритмов». В салоне пассажиров: 3
…
…


Маршрут состоит из четырёх остановок. Напишите программу так, чтобы в конце она выводила, сколько денег мы заработали при условии, что билет стоит 20 руб., а расходы следующие
• четверть — на зарплату водителю;
• пятая часть — на топливо;
• пятая часть — на налоги;
• пятая часть — на ремонт машины.
Формат вывода (после прибытия на последнюю остановку):
Всего заработали: 100 руб.
Зарплата водителя: 25 руб.
Расходы на топливо: 20 руб.
Налоги: 20 руб.
Расходы на ремонт машины: 20 руб.
Итого доход: 15 руб.*/




#include <iostream>

int main() {
    int enteredPassengers;                                                           // Зошло пасажиров
    int exitedPassengers;                                                            // Вышло пасожиров
    int paymentForTravel;                                                            // Оплатаза проезд
    int amount;                                                                      // Сумма 
    int salonPassengers = 0;                                                         // В салоне пасажиров
    int amountTransit = 20;                                                          // Сумма проезда
    int salaryDriver;                                                                // зарплату водителю
    int felu;                                                                        // топливо
    int нtaxes;                                                                      // налоги
    int carRepair;                                                                   // ремонт машины
    int totalIncome;                                                                 // Итого доход
    
    std::cout << "Здравствуйте мы привествуем вас в нашей маршрутку. \n" << "Прибываем на остановку «Улица программистов». В салоне " << salonPassengers
    << " пассажиров: "<< "\n";
    std::cout << "Сколько пассажиров зашло на остановке?: ";                                                
    std::cin >> enteredPassengers;
    salonPassengers = salonPassengers + enteredPassengers;
    amount = amountTransit * enteredPassengers;
    std::cout << " Всего заработали: " << amount << "\n";
    std::cout << "Отправляемся с остановки «Улица программистов. В салоне " << salonPassengers << " пассажиров: "<< "\n";
    std::cout << "-----------Едем---------: \n";

    std::cout << "Прибываем на остановку «Улица программистов 1». В салоне " << salonPassengers << " пассажиров: "<< "\n";
    std::cout << "Сколько пассажиров зашло на остановке?: ";                                                
    std::cin >> enteredPassengers;
    std::cout << "Сколько пассажиров вышло на остановке?: ";
    std::cin >> exitedPassengers;
    salonPassengers = salonPassengers + enteredPassengers;
    amount = amountTransit * enteredPassengers;
    amount = amount + amount;
    std::cout << " Всего заработали: " << amount << "\n";
    std::cout << "Отправляемся с остановки «Улица программистов1. В салоне " << salonPassengers << " пассажиров: "<< "\n";
    std::cout << "-----------Едем---------: \n";

    std::cout << "Прибываем на остановку «Улица программистов 2». В салоне " << salonPassengers << " пассажиров: "<< "\n";
    std::cout << "Сколько пассажиров зашло на остановке?: ";                                                
    std::cin >> enteredPassengers;
    std::cout << "Сколько пассажиров вышло на остановке?: ";
    std::cin >> exitedPassengers;
    salonPassengers = salonPassengers + enteredPassengers;
    amount = amountTransit * enteredPassengers + amount;

    std::cout << " Всего заработали: " << amount << "\n";
    std::cout << "Отправляемся с остановки «Улица программистов 2. В салоне " << salonPassengers << " пассажиров: "<< "\n";
    std::cout << "-----------Едем---------: \n";

    std::cout << "Прибываем на остановку «Улица программистов 3». В салоне " << salonPassengers << " пассажиров: "<< "\n";
    std::cout << "Сколько пассажиров зашло на остановке?: ";                                                
    std::cin >> enteredPassengers;
    std::cout << "Сколько пассажиров вышло на остановке?: ";
    std::cin >> exitedPassengers;
    salonPassengers = salonPassengers + enteredPassengers;
    amount = amountTransit * enteredPassengers + amount;

    std::cout << " Всего заработали: " << amount << "\n";
    std::cout << "Отправляемся с остановки «Улица программистов 3. В салоне " << salonPassengers << " пассажиров: "<< "\n";
    std::cout << "-----------Едем---------: \n";

    std::cout << "Прибываем на остановку «Улица программистов 4». В салоне " << salonPassengers << " пассажиров: "<< "\n";
    std::cout << "Сколько пассажиров зашло на остановке?: ";                                                
    std::cin >> enteredPassengers;
    std::cout << "Сколько пассажиров вышло на остановке?: ";
    std::cin >> exitedPassengers;
    salonPassengers = salonPassengers + enteredPassengers;
    amount = amountTransit * enteredPassengers + amount;

    std::cout << " Всего заработали: " << amount << "\n";
    std::cout << "Отправляемся с остановки «Улица программистов 4. В салоне " << salonPassengers << " пассажиров: "<< "\n";
    
    /*amount = amount + amount;*/
    std::cout << "Всего заработали: " << amount;

    felu = amount / 5;
    salaryDriver = amount / 4;
    нtaxes = amount / 5;
    carRepair = amount / 5;
    totalIncome = amount - salaryDriver - carRepair - felu - carRepair;

    std::cout << " Всего заработали: " << amount << "\n";
    std::cout << " Зарплату водителю: " << salaryDriver << "\n";
    std::cout << " Tопливо: " << felu << "\n";
    std::cout << " Налоги: " << нtaxes << "\n";
    std::cout << " Pемонт машины: " << carRepair << "\n";
    std::cout << " Итого доход: " << totalIncome << "\n"; 


/*  int salaryDriver;                                                                // зарплату водителю
    int felu;                                                                        // топливо
    int нtaxes;                                                                      // налоги
    int carRepair;                                                                   // ремонт машины
    int totalIncome;                                                                 // Итого доход
*/


    // std::cout << "Итого: " << price << "\n";
}