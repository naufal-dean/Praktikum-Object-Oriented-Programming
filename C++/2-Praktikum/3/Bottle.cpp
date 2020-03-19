// Nama		: Naufal Dean Anugrah
// NIM		: 13518123
// Tanggal	: 30 Januari 2020
// Topik	: Ctor, Cctor, Dtor, Const, Static, Friends, Overloading

#include "Bottle.hpp"

using namespace std;

int Bottle::numOfBottle = 0;

Bottle::Bottle() : id(numOfBottle + 1) {
	this->height = 10.00;
	this->radius = 10.00;
	this->waterHeight = 0.00;
	numOfBottle += 1;
}
/* Ctor default Bottle kosong dengan tinggi = 10.00 dan radius = 10.00 */
Bottle::Bottle(float height, float radius) : id(numOfBottle + 1) {
	this->height = height;
	this->radius = radius;
	this->waterHeight = 0.00;
	numOfBottle += 1;
}
/* Ctor Bottle jika diketahui nilai tinggi dan radius, Bottle kosong*/
Bottle::Bottle(const Bottle& bottle) : id(bottle.id) {
	this->height = bottle.height;
	this->radius = bottle.radius;
	this->waterHeight = bottle.waterHeight;
}
/* Cctor Bottle. id juga dicopy dan numOfBottle tidak bertambah */
Bottle::~Bottle() {

}
/* Destruktor Bottle */

int Bottle::getId() const {
	return this->id;
}
/* Mengembalikan id Bottle */
float Bottle::getWaterVolume() const {
	return (PI * this->radius * this->radius * this->waterHeight);
}
/* Mengembalikan volume air dalam botol */
float Bottle::getBottleVolume() const {
	return (PI * this->radius * this->radius * this->height);
}
/* Mengembalikan volume botol */

void Bottle::setHeight(float height) {
	this->height = height;
	if (this->height < this->waterHeight) {
		this->waterHeight = this->height;
	}
}
/*
* Mengubah tinggi Bottle. Jika tinggi baru kurang dari tinggi air,
* maka tinggi air = tinggi yang baru.
*/

void Bottle::addWater(float waterVolume) {
	float deltaHeight = waterVolume / (PI * this->radius * this->radius);
	if (this->waterHeight + deltaHeight > this->height) {
		this->waterHeight = this->height;
	} else {
		this->waterHeight = this->waterHeight + deltaHeight;
	}
}
/*
* Menambahkan air ke dalam botol. Jika botol tidak muat, biarkan
* botol penuh.
*/

void Bottle::substractWater(float waterVolume) {
	float deltaHeight = waterVolume / (PI * this->radius * this->radius);
	if (this->waterHeight - deltaHeight < 0) {
		this->waterHeight = 0.00;
	} else {
		this->waterHeight = this->waterHeight - deltaHeight;
	}
}
/*
* Mengurangi air dari botol. Jika air yang tersedia kurang, biarkan
* botol kosong.
*/

float Bottle::getWaterHeightIfVolume(float waterVolume) const {
	return (waterVolume / (PI * this->radius * this->radius));
}
/*
* Mengembalikan tinggi air dari botol jika diketahui suatu volume air.
* Tinggi botol diabaikan, dianggap tidak akan terlalu penuh.
*/

void Bottle::pourWaterTo(Bottle& other) {
	float thisWaterVolume = PI * this->radius * this->radius * this->waterHeight;
	float otherWaterVolume = other.getWaterVolume();
	float otherBottleVolume = other.getBottleVolume();
	if (thisWaterVolume > otherBottleVolume - otherWaterVolume) {
		this->substractWater(otherBottleVolume - otherWaterVolume);
		other.waterHeight = other.height;
	} else {
		this->waterHeight = 0.00;
		other.addWater(thisWaterVolume);
	}
}
/*
* Menuang isi botol ini ke botol lain sampai botol ini kosong.
* Jika botol lain penuh sebelum semua air pindah, maka penuangan
* berhenti dan terdapat sisa air di botol ini.
*/