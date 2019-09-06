//
// Created by Maikol Guzman  on 2019-09-05.
//

#include "Cama.h"

Cama::Cama(){}

Cama::Cama(const std::string &codigo, bool estado) {
	codigo;
	estado = 0;
}

Cama::~Cama(){}

std::string Cama::getCodigo() const {
	return codigo;
}

void Cama::setCodigo(const std::string &codigo) {
	codigo = codigo;
}