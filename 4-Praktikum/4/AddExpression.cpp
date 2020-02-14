// Nama         : Naufal Dean Anugrah
// NIM          : 13518123
// Tanggal      : 13 Februari 2020 
// Topik        : Inheritance, Polymorphism, Abstract Base Class

#include "AddExpression.hpp"

AddExpression::AddExpression(Expression * T1, Expression * T2) : BinaryExpression(T1, T2) {}

int AddExpression::solve() {
	return x->solve() + y->solve();
}