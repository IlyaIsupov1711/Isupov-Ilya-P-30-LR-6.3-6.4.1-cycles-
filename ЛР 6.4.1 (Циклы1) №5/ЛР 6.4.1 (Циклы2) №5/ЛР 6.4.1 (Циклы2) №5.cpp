#include<iostream>

int main()
{
    setlocale(LC_ALL, "RUS");
    int gouses, rabits;
    gouses = 0;
    do
    {
        rabits = (64 - gouses * 2) / 4;
        if (rabits * 4 + gouses * 2 == 64)
            std::cout << "\n" << gouses << " гусей и  " << rabits << "кроликов";
        gouses++;
    } while (gouses <= 32);
    return 0;
}