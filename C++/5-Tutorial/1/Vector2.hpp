#ifndef _VECTOR2_HPP_
#define _VECTOR2_HPP_

#include <iostream>

using namespace std;

class Vector2 {
private:
    int* elements;

public:
    Vector2() {
        this->elements = new int[2];
        this->elements[0] = 0;
        this->elements[1] = 0;
    }

    Vector2(const Vector2& other) {
        this->elements = new int[2];
        this->elements[0] = other.elements[0];
        this->elements[1] = other.elements[1];
    }

    ~Vector2() {
        delete[] this->elements;
    }

    int& operator[](int idx) {
        return this->elements[idx];
    }

    Vector2 operator+(const Vector2& other) {
        Vector2 result;
        result.elements[0] = elements[0] + other.elements[0];
        result.elements[1] = elements[1] + other.elements[1];
        return result;
    }

    Vector2 operator-(const Vector2& other) {
        Vector2 result;
        result.elements[0] = elements[0] - other.elements[0];
        result.elements[1] = elements[1] - other.elements[1];
        return result;
    }

    bool operator<(const Vector2& other) {
        if (elements[0] != other.elements[0]) {
            return elements[0] < other.elements[0];
        }
        return elements[1] < other.elements[1];
    }

    bool operator>(const Vector2& other) {
        if (elements[0] != other.elements[0]) {
            return elements[0] > other.elements[0];
        }
        return elements[1] > other.elements[1];
    }

    friend std::ostream& operator<<(ostream& os, Vector2 vector) {
        os << "<";
        os << vector.elements[0];
        os << ",";
        os << vector.elements[1];
        os << ">";
        return os;
    }

    friend std::istream& operator>>(istream& is, Vector2& vector) {
        return is >> vector.elements[0] >> vector.elements[1];
    }
};

#endif