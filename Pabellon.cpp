//
// Created by Maikol Guzman  on 2019-09-05.
//

#include "Pabellon.h"

Pabellon::Pabellon() {}

Pabellon::Pabellon(int tamano) {
	tamano = 0;
}

Pabellon::Pabellon(char id, char genero, int tamano) {
	id = 'A' || 'B';
	genero = 'M' || 'H';
	tamano = 0;
}

Pabellon::~Pabellon(){}

void Pabellon::agregarCama(Cama*) {

}

void Pabellon::eliminarCama(Cama*) {

}

void Pabellon::eliminarTodasLasCamas() {

}

char Pabellon::getId() const {
	return id;
}

void Pabellon::setId(char id) {
	id = id;
}

char Pabellon::getGenero() const {
	return genero;
}

void Pabellon::setGenero(char genero) {
	genero = genero;
}

int Pabellon::getTamano() const {
	return tamano;
}

void Pabellon::setTamano(int tamano) {
	tamano = tamano;
}

int Pabellon::getCantidad() const {
	return cantidad;
}

void Pabellon::setCantidad(int cantidad) {
	cantidad = cantidad;
}
