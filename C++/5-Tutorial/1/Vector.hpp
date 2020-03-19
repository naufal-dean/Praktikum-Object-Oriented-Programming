// Nama     : Naufal Dean Anugrah
// NIM      : 13518123
// Topik    : Generic class
// Tanggal  : 20 Februari 2020

#ifndef _VECTOR_HPP_
#define _VECTOR_HPP_

#include <iostream>

using namespace std;

template<class T, int N>
class Vector {
private:
    T* elements;

public:
    Vector() {
        this->elements = new T[N];
    }

    Vector(const Vector<T, N>& other) {
        this->elements = new T[N];
        for (int i = 0; i < N; ++i) {
           this->elements[i] = other.elements[i];
        }
    }

    ~Vector() {
        delete[] this->elements;
    }

    T& operator[](int idx) {
        return this->elements[idx];
    }

    Vector<T, N> operator+(const Vector<T, N>& other) {
        Vector result;
        for (int i = 0; i < N; ++i) {
           result.elements[i] = elements[i] + other.elements[i];
        }
        return result;
    }

    Vector<T, N> operator-(const Vector<T, N>& other) {
        Vector result;
        for (int i = 0; i < N; ++i) {
           result.elements[i] = elements[i] - other.elements[i];
        }
        return result;
    }

    bool operator<(const Vector<T, N>& other) {
        for (int i = 0; i < N; ++i) {
            if (this->elements[i] != other.elements[i]) {
                return this->elements[i] < other.elements[i];
            }
        }
        return false;
    }

    bool operator>(const Vector<T, N>& other) {
        for (int i = 0; i < N; ++i) {
            if (this->elements[i] != other.elements[i]) {
                return this->elements[i] > other.elements[i];
            }
        }
        return false;
    }

    friend std::ostream& operator<<(ostream& os, Vector<T, N> vector) {
        os << "<";
        for (int i = 0; i < N; ++i) {
            os << vector.elements[i];
            if (i != N - 1) {
                os << ",";
            }
        }
        os << ">";
        return os;
    }

    friend std::istream& operator>>(istream& is, Vector<T, N>& vector) {
        for (int i = 0; i < N; ++i) {
            is >> vector.elements[i];
        }
        return is;
    }
};

#endif