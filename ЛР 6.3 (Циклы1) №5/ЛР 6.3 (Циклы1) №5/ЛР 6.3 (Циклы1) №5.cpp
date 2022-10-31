#include <iostream>

int main()
{
	setlocale(LC_ALL, "RUS");
	int num;
	std::cout << "Введите число="; std::cin >> num;
    switch (num)
    {
    case 1: std::cout << "Январь";
        break;
    case 2: std::cout << "Февраль";
        break;
    case 3: std::cout << "Март";
        break;
    case 4: std::cout << "Апрель";
        break;
    case 5: std::cout << "Май";
        break;
    case 6: std::cout << "Июнь";
        break;
    case 7: std::cout << "Июль";
        break;
    case 8: std::cout << "Август";
        break;
    case 9: std::cout << "Сентябрь";
        break;
    case 10: std::cout << "Октябрь";
        break;
    case 11: std::cout << "Ноябрь";
        break;
    case 12: std::cout << "Декабрь";
        break;
    };
}