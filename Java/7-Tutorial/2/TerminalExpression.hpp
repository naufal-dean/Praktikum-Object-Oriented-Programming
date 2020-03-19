#ifndef _TERMINAL_EXPRESSION_HPP_
#define _TERMINAL_EXPRESSION_HPP_

#include "Expression.hpp"

// Di bawah ini, kelas TerminalExpression menginherit Expression
// Namun, sekarang Expression merupakan interface, bukan kelas.
class TerminalExpression : public Expression {
protected:
  int x;
public:
  TerminalExpression(int x) {
    this->x = x;
  }

  int solve() {
    return this->x;
  }
};

#endif
