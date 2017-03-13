/*
 * Noticia.h
 *
 *  Created on: 16 de may. de 2016
 *      Author: gotzon gerrikabeitia
 */
using namespace std;
#include <string>
#ifndef NOTICIA_H_
#define NOTICIA_H_

class Noticia {
public:

	Noticia();
	Noticia(string titulo,string autor,string desc);

	virtual ~Noticia();

	string getAutor(void) ;
	string getDescripcion(void) ;
	string getTitulo(void) ;
	int getId(void);
	void setAutor(string autor) ;
	void setDescripcion(string desc) ;
	void setTitulo(string titulo) ;
	void setId(int id);


private:
	string titulo;
	string autor;
	string descripcion;
	int id;
};

#endif /* NOTICIA_H_ */
