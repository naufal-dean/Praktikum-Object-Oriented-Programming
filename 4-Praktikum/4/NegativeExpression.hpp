#ifndef NEGATIVE_EXPRESSION_H
#define NEGATIVE_EXPRESSION_H

#include "Expression.hpp"

class NegativeExpression : public UnaryExpression {
public:
	NegativeExpression(Expression * T1);
	int solve();
};

#endif
