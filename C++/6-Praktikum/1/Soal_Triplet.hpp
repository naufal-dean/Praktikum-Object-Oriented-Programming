#ifndef _TRIPLET_HPP_
#define _TRIPLET_HPP_

#include <iostream>

class Triplet {
private:
    int first;
    int second;
    int third;
public:
    Triplet() {}
    Triplet(int first, int second, int third) {
        this->first = first;
        this->second = second;
        this->third = third;
    }
    Triplet(const Triplet& tr) {
        this->first = first;
        this->second = second;
        this->third = third;
    }

    int getFirst() {
        return this->first;
    }
    int getSecond() {
        return this->second;
    }
    int getThird() {
        return this->third;
    }

    void setFirst(int first) {
        this->first = first;
    }
    void setSecond(int second) {
        this->second = second;
    }
    void setThird(int third) {
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
