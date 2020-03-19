#ifndef _EXPRESSION_HPP_
#define _EXPRESSION_HPP_

// Abstract Base Class berikut tidak memiliki method yang
// terdefinisikan. Karena itu, kelas ini perlu dikonversi
// menjadi interface di java.
class Expression {
public:
    virtual int solve() = 0;
};

#endif
