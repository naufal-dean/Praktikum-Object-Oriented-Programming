#ifndef _ADD_EXPRESSION_HPP_
#define _ADD_EXPRESSION_HPP_

#include "Expression.hpp"

// Di bawah ini, kelas AddExpression menginherit Expression
// Namun, sekarang Expression merupakan interface, bukan kelas.
class AddExpression : public Expression {
protected:
  // Di Java, tidak ada konsep pointer. Polymorphism dapat dilakukan
  // pada reference, bukan pointer.
  Expression* x;
  Expression* y;
public:
  AddExpression(Expression* x, Expression* y) {
    this->x = x;
    this->y = y;
  }

  int solve() {
    return this->x->solve() + this->y->solve();
  }
};

#endif
