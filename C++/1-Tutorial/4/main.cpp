// Nama     : Naufal Dean Anugrah
// NIM      : 13518123
// Tanggal  : 23 Januari 2020
// Topik    : Pengenalan class

#include "A.hpp"

int main() {
    A * A1 = new A('1');
    A * A2 = new A('2');
    A * A3 = new A(*A1);
    *A3 = *A2;
    A2->show();
    delete A2;
    delete A3;
    delete A1;
    return 0;
}
