#include <iostream>
#include "Seven.h"

int main()
{
    // Создание объектов
    Seven obj1(12345);
    Seven obj2(67);

    // Демонстрация конструктора копирования
    Seven objCopy = obj1;

    // Демонстрация перемещения
    Seven objMove(std::move(obj2));

    // Вывод
    std::cout << "obj1: ";
    obj1.print();
    std::cout << "objCopy (copy of obj1): ";
    objCopy.print();
    std::cout << "objMove (moved from obj2): ";
    objMove.print();

    // Демонстрация операторов
    try {
        Seven sum = obj1 + objCopy; // Сложение
        std::cout << "Sum of obj1 and objCopy: ";
        sum.print();

        Seven diff = obj1 - objMove; // Вычитание
        std::cout << "Difference of obj1 and objMove: ";
        diff.print();

        if (obj1 == objCopy) { // Сравнение
            std::cout << "obj1 and objCopy are equal." << std::endl;
        } else {
            std::cout << "obj1 and objCopy are not equal." << std::endl;
        }

        if (obj1 > objMove) {
            std::cout << "obj1 is greater than objMove." << std::endl;
        } else if (obj1 < objMove) {
            std::cout << "obj1 is less than objMove." << std::endl;
        } else {
            std::cout << "obj1 and objMove are equal." << std::endl;
        }

    } catch (const std::runtime_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
