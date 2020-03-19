#ifndef _NEGATIVE_EXPRESSION_HPP_
#define _NEGATIVE_EXPRESSION_HPP_

#include "Expression.hpp"

// Di bawah ini, kelas NegativeExpression menginherit Expression
// Namun, sekarang Expression merupakan interface, bukan kelas.
class NegativeExpression : public Expression {
protected:
  // Di Java, tidak ada konsep pointer. Polymorphism dapat dilakukan
  // pada reference, bukan pointer.
  Expression* x;
public:
  NegativeExpression(Expression* x) {
    this->x = x;
  }

  int solve() {
    return -1 * this->x->solve();
  }
};

#endif
