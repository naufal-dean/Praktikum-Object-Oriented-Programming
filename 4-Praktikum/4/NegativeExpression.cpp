// Nama         : Naufal Dean Anugrah
// NIM          : 13518123
// Tanggal      : 13 Februari 2020 
// Topik        : Inheritance, Polymorphism, Abstract Base Class

#include "NegativeExpression.hpp"


NegativeExpression::NegativeExpression(Expression * T1) : UnaryExpression(T1) {}

int NegativeExpression::solve() {
	return (-1) * x->solve();
}
