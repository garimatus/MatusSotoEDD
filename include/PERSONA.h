#ifndef PERSONA_H
#define PERSONA_H
#include "RUT.h"
#include "FECHA.h"
#include <string>

using namespace std;

class PERSONA{
	private:
	protected:
		RUT Rut;
        string nombre;
		FECHA FechaNac;
		string mail;
		string nacionalidad;
		long long int sueldo;
	public:
        PERSONA();
        void set_Rut(long int);
	   	void set_nombre(string nom);
	   	void set_FechaNac(int,int,int);
        void set_mail(string);
	   	void set_nacionalidad(string);
	   	void set_sueldo(long long int);
        RUT get_Rut();
        string get_nombre();
        FECHA get_FechaNac();
        string get_mail();
        string get_nacionalidad();
		long long int get_sueldo();
        ~PERSONA();
};

#endif // PERSONA_H
