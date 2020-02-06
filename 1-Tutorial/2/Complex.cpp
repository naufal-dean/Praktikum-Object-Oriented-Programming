// Nama		: Naufal Dean Anugrah
// NIM		: 13518123
// Tanggal	: 23 Januari 2020
// Topik	: Pengenalan class

#include "Complex.h"

Complex::Complex() {
	this->real = 0;
	this->imaginer = 0;
}
Complex::Complex(int re, int im) {
	this->real = re;		
	this->imaginer = im;
}
Complex::Complex(const Complex &comp) {
	this->real = comp.real;
	this->imaginer = comp.imaginer;
}
Complex::~Complex() {

}

int Complex::getReal() {
	return this->real;
}
int Complex::getImaginer() {
	return this->imaginer;
}
void Complex::setReal(int re) {
	this->real = re;
}
void Complex::setImaginer(int im) {
	this->imaginer = im;
}

Complex Complex::operator + (Complex const &comp) {
	Complex C((this->real + comp.real), (this->imaginer + comp.imaginer));
	return C;
}
Complex Complex::operator - (Complex const &comp) {
	Complex C((this->real - comp.real), (this->imaginer - comp.imaginer));
	return C;
}
Complex Complex::operator * (Complex const &comp) {
	// Kamus lokal
	int re, im;
	// Algoritma
	re = (this->real * comp.real) - (this->imaginer * comp.imaginer);
	im = (this->real * comp.imaginer) + (this->imaginer * comp.real);
	Complex C(re, im);
	return C;
}
