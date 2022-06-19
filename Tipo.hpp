#pragma once
#include <iostream>

using namespace std;

class Tipo {
private:
	string tipoEstado;
	string tipoClasificacion;

public:
	Tipo(string estado, string clasificacion){
		tipoEstado = estado;
		tipoClasificacion = clasificacion;
	}
	string getTipoEstado() { return tipoEstado; }
	string getTipoClasificaion() { return tipoClasificacion; }
	void setTipoEstado(string e) { tipoEstado = e; }
	void setTipoClasificaion(string c) { tipoClasificacion = c; }

};