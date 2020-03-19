#ifndef ADD_EXPRESSION_H
#define ADD_EXPRESSION_H

#include "Expression.hpp"

class AddExpression : public BinaryExpression {
public:
	AddExpression(Expression * T1, Expression * T2);
	int solve();
};

#endif
