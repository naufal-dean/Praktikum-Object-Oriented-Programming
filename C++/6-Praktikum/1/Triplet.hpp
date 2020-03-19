// Nama		: Naufal Dean Anugrah
// NIM		: 13518123
// Tanggal 	: 27 Februari 2020
// Topik	: Generik, exception, and stl

#ifndef _TRIPLET_HPP_
#define _TRIPLET_HPP_

#include <iostream>

template<class X, class Y, class Z>
class Triplet {
private:
    X first;
    Y second;
    Z third;
public:
    Triplet() {}
    Triplet(X first, Y second, Z third) {
        this->first = first;
        this->second = second;
        this->third = third;
    }
    Triplet(const Triplet& tr) {
        this->first = first;
        this->second = second;
        this->third = third;
    }

    X getFirst() {
        return this->first;
    }
    Y getSecond() {
        return this->second;
    }
    Z getThird() {
        return this->third;
    }

    void setFirst(X first) {
        this->first = first;
    }
    void setSecond(Y second) {
        this->second = second;
    }
    void setThird(Z third) {
        this->third = third;
    }

    bool operator==(const Triplet& t) {
        return (this->first == t.first) && (this->second == t.second) && (this->third == t.third);
    }

    bool operator!=(const Triplet& t) {
        return (this->first != t.first) || (this->second != t.second) || (this->third != t.third);
    }
};

#endif
