#pragma once
#include <vector>
#include <iostream>
#include <stdexcept>

class Seven
{
public:
    Seven() {} // Конструктор по умолчанию

    Seven(int value) {
        if (value == 0) {
            data.push_back(0);
        } else {
            while (value > 0) {
                data.push_back(value % 7);
                value /= 7;
            }
        }
    }

    Seven(const Seven& other)
    {
        data = other.data;
    }

    Seven(Seven&& other) // перемещение
    {
        data = std::move(other.data);
        other.data.clear();
    }

    ~Seven() {}

    Seven operator+(const Seven& other) const {
        Seven result;
        size_t maxSize = std::max(data.size(), other.data.size());
        int carry = 0;
        for (size_t i = 0; i < maxSize; ++i) {
            int digit1 = (i < data.size()) ? data[i] : 0;
            int digit2 = (i < other.data.size()) ? other.data[i] : 0;
            int sum = digit1 + digit2 + carry;
            carry = sum / 7;
            result.data.push_back(sum % 7);
        }
        if (carry != 0)
            result.data.push_back(carry);
        return result;
    }

    Seven operator-(const Seven& other) const {
        if (*this < other)
            throw std::runtime_error("Cannot subtract larger number from smaller one");
        Seven result;
        size_t maxSize = data.size();
        int borrow = 0;
        for (size_t i = 0; i < maxSize; ++i) {
            int digit1 = data[i];
            int digit2 = (i < other.data.size()) ? other.data[i] : 0;
            int diff = digit1 - digit2 - borrow;
            if (diff < 0) {
                diff += 7;
                borrow = 1;
            } else {
                borrow = 0;
            }
            result.data.push_back(diff);
        }
        // Удаление ведущих нулей
        while (result.data.size() > 1 && result.data.back() == 0) {
            result.data.pop_back();
        }
        return result;
    }

    bool operator==(const Seven& other) const {
        return data == other.data;
    }

    bool operator<(const Seven& other) const {
        if (data.size() != other.data.size())
            return data.size() < other.data.size();
        for (size_t i = data.size(); i-- > 0;) {
            if (data[i] != other.data[i])
                return data[i] < other.data[i];
        }
        return false;
    }

    bool operator>(const Seven& other) const {
        return other < *this;
    }

    void print() const {
        for (auto it = data.rbegin(); it != data.rend(); ++it) {
            std::cout << static_cast<int>(*it);
        }
        std::cout << std::endl;
    }

private:
    std::vector<unsigned char> data; // Хранит цифры числа в семеричной системе
};
