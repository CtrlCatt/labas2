#include <iostream>
#include <vector>
#include "Seven.h"


int main()
{
     // Создание объектов
    Seven obj1(5, 11111); // Создаст вектор [5, 4, 3, 2, 1]
    Seven obj2(5, 55555); // Создаст вектор [1, 2, 3, 4, 5]
    
    // Демонстрация конструктора копирования
    Seven objCopy = obj1;

    // Демонстрация перемещения
    Seven objMove(obj2);

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

        Seven diff = obj1 - objCopy; // Вычитание
        std::cout << "Difference of obj1 and objCopy: ";
        diff.print();
        
        if (obj1 == objCopy) { // Сравнение
            std::cout << "obj1 and objCopy are equal." << std::endl;
        } else {
            std::cout << "obj1 and objCopy are not equal." << std::endl;
        }
        
    } catch (const std::runtime_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}