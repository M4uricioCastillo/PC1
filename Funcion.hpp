#include <iostream>
#include <string>
#include "Asiento.hpp"
#define byte unsigned char
using namespace std;

class Funcion
{
private:
    string Nombre;
    string Fecha;
    Asiento** asientos;
    bool Cancelada;
public:
    Funcion()
    {
        Nombre = "ND";
        Fecha = "00:00:00 01/01/2000";
        asientos = nullptr;
        Cancelada = true;
    }
    Funcion(string nombre, string fecha, pair<byte, byte> asientos)
    {
        this->Nombre = nombre;
        this->Fecha = fecha;
        this->asientos = new Asiento*[asientos.first];
        for (byte i = 0; i < asientos.first; i++)
        {
            this->asientos[i] = new Asiento[asientos.second];
        }
        Cancelada = false;
    }
    ~Funcion()
    {
    }
};