#ifndef SUBSTRACT_EXPRESSION_H
#define SUBSTRACT_EXPRESSION_H

#include "Expression.hpp"

class SubstractExpression : public BinaryExpression {
public:
	SubstractExpression(Expression * T1, Expression * T2);
	int solve();
};

#endif

