// Nama         : Naufal Dean Anugrah
// NIM          : 13518123
// Tanggal      : 13 Februari 2020 
// Topik        : Inheritance, Polymorphism, Abstract Base Class

#include "SubstractExpression.hpp"

SubstractExpression::SubstractExpression(Expression * T1, Expression * T2) : BinaryExpression(T1, T2) {}

int SubstractExpression::solve() {
	return x->solve() - y->solve();
}
