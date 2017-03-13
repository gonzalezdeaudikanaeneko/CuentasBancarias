

#include "Noticia.h"
using namespace std;
Noticia::Noticia() {
	// TODO Auto-generated constructor stub
	this->titulo = "";
	this->autor = "";
	this->descripcion = "";
	int id=0;
}
Noticia::Noticia(string titulo,string autor,string desc) {
	// TODO Auto-generated constructor stub
	this->titulo = titulo;
	this->autor = autor;
	this->descripcion = desc;
	int id=0;
}
string Noticia::getAutor(void){
	return autor;
}
string Noticia::getDescripcion(void){
	return descripcion;
}
string Noticia::getTitulo(void){
	return titulo;
}
int Noticia::getId(void){
	return id;
}
void Noticia::setTitulo(string titulo){
	this->titulo = titulo;
}
void Noticia::setAutor(string autor){
	this->autor = autor;
}
void Noticia::setDescripcion(string desc){
	this->descripcion = desc;
}
void Noticia::setId(int id){
	this->id = id;
}
Noticia::~Noticia() {
	// TODO Auto-generated destructor stub
	delete[] this;
}

