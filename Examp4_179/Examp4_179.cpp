#include <iostream>
using namespace std;

float LuasPersegi(float p, float l) {
	return p * l;
}
float LuasLingkaran(float r) {
	return 3.14 * r * r;
}
float LuasSegitiga(float a, float t) {
	return 0.5 * a * t;
}

int main()
{
	float panjang, lebar, jejari, alas, tinggi;
	int pilihan;

	do {